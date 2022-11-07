# 一.Git 安装配置

## 1.1配置个人的用户名称和电子邮件地址：

```nginx
git config --global user.name "ShenShizhe"
git config --global user.email "3093326255@qq.com"
```

**注：此处邮箱账号可直接写入，引号可省略**

## 1.2设置github账号

### 1.2.1创建SSH Key

```nginx
$ ssh-keygen -t rsa -C "3093326255@qq.com"
Generating public/private rsa key pair.
Enter file in which to save the key (/c/Users/Administrator/.ssh/id_rsa):
Enter passphrase (empty for no passphrase):
Enter same passphrase again:
Your identification has been saved in /c/Users/Administrator/.ssh/id_rsa
Your public key has been saved in /c/Users/Administrator/.ssh/id_rsa.pub
The key fingerprint is:
SHA256:J2gsrGUIqjqFipdHy4YJSMlce9xSizvEfvtUgoE56HM 3093326255@qq.com
The key's randomart image is:
+---[RSA 3072]----+
|                 |
|   .. o.         |
|+ o.+++..        |
|.*.+ O.+o        |
|+..oOE*.S...     |
|= .++* . oo      |
|+o.* .o ..       |
|= = =  ..        |
|.o o    ..       |
+----[SHA256]-----+

```

```nginx
密匙存储的位置:c/Users/Administrator/.ssh/id_rsa
```

### 1.2.2复制本地id_rsa.pub里内容



**注意：id_rsa是私钥，不能泄露出去，id_rsa.pub是公钥，可以放心地告诉任何人**

### 1.2.3登录github,打开” settings”中的SSH Keys页面，然后点击“Add SSH Key”,填上任意title，在Key文本框里黏贴id_rsa.pub文件的内容

![img](img\v2-c7546a7705a83f46bd82c7b44ac38f55_720w.webp)

### 1.2.4测试SSH连接

```nginx
ssh -T git@github.com
Hi ShenShizhe! You've successfully authenticated, but GitHub does not provide shell access.

```

**出现：Hi“用户名”!即表示成功**

# 二.创建仓库

## 2.1创建远程仓库

### 2.1.1在github首页单击[New]

![1666594538981](img\1666594538981.png)
### 2.1.2填写仓库名称、选写仓库描述、选择仓库类型，单击[Create repository]后便正式创建了一个仓库

![image-20221024203221855](img\image-20221024203221855.png)

**注意不要勾选Initialize this repository with a README.**

### 2.1.3创建成功后：

![image-20221024203500268](img\image-20221024203500268.png)

## 2.2创建本地仓库

### 2.2.1初始化本地仓库

```nginx
git init
```

注意：该命令会在当前目录创建你的本地仓库**(pwd：查看当前目录)**，使用**git init 仓库名**将在指定的目录下初始化本地仓库。

```nginx
git init test
Initialized empty Git repository in C:/git/test/.git/
```

下载一个项目和它的整个代码历史

```nginx
git clone [url]
```



### 2.2.2 查看创建的本地仓库

![1666596524008](img\1666596524008.png)

- 本地仓库的文件是一个**.git**文件夹，如需查看需打开隐藏文件

# 三.git配置及常见操作命令

## 3.1 git的基本常识

- Git 的工作就是创建和保存你项目的快照及与之后的快照进行对比

![image-20221024195418672](img\image-20221024195418672.png)

- 常用6个命令：**git clone**、**git push**、**git add** 、**git commit**、**git checkout**、**git pull**  
- 说明：workspace：工作区、staging area：暂存区/缓存区、local repository：版本库或本地仓库、remote repository：远程仓库

## 3.2 git的相关配置

### 3.2.1 新建代码库

- 在当前目录新建一个Git代码库

```nginx
git init
```

- 新建一个目录，将其初始化为Git代码库

```
git init [project-name]
```

- 下载一个项目和它的整个代码历史

```nginx
git clone [url]
```

### 3.2.2配置

Git的设置文件为**.gitconfig**，它可以在用户主目录下（全局配置），也可以在项目目录下（项目配置）

- 显示当前的Git配置

```nginx
git config —list
```

- 编辑Git配置文件

```nginx
git config -e [—global]
```

- 设置提交代码时的用户信息

```nginx
git config [—global] user.name “[name]”

git config [—global] user.email “[email address]”
```

### 3.2.3增加/删除文件

- 添加指定文件到暂存区

```nginx
git add [file1] [file2] …
```

- 添加指定目录到暂存区，包括子目录

```nginx
git add [dir]
```

- 添加当前目录的所有文件到暂存区

```nginx
git add .
git add *
```

- -u 表示将已跟踪文件中的修改和删除的文件添加到暂存区，不包括新增加的文件，注意这些被删除的文件被加入到暂存区再被提交并推送到[服务器](https://cloud.tencent.com/product/cvm?from=10680)的版本库之后这个文件就会从git系统中消失了

```nginx
git add -u .
```

- 添加某个文件类型到暂存区，比如所有的 `.html` 文件

```nginx
git add *.html
```

- **添加整个文件夹**到暂存区，比如根目录的 index 文件夹

```nginx
git add index/
```

- **添加某个文件或者某个文件夹中的某个文件**到暂存区 ，比如 index 下的 `index.html` 文件

```nginx
git add index/index.html
```



- 添加已跟踪的文件

```nginx
git add -u .
```

- 添加已跟踪和未跟踪的文件

```nginx
git add -A .
```

- 取消添加

```nginx
git reset HEAD + 文件名
```

- 添加每个变化前，都会要求确认、对于同一个文件的多处变化，可以实现分次提交

```nginx
git add -p
```

- 删除工作区文件，并且将这次删除放入暂存区

```nginx
git rm [file1] [file2] …
```

- 停止追踪指定文件，但该文件会保留在工作区

```
git rm —cached [file]
```

- 改名文件，并且将这个改名放入暂存区

```
git mv [file-original] [file-renamed]
```

### 3.2.4代码的提交

- 提交暂存区到仓库区

```nginx
git commit -m [message]
```

- 提交暂存区的指定文件到仓库区

```nginx
git commit [file1] [file2] … -m [message]
```

- 提交工作区自上次commit之后的变化，直接到仓库区

```nginx
git commit -a
```

- 提交时显示所有diff信息

```nginx
git commit -v
```

- 使用一次新的commit，替代上一次提交、如果代码没有任何新变化，则用来改写上一次commit的提交信息

```nginx
git commit —amend -m [message]
```

- 重做上一次commit，并包括指定文件的新变化

```nginx
git commit —amend [file1] [file2] …
```

### 3.2.5 分支

- 列出所有本地分支

```nginx
git branch
```

- 列出所有远程分支

```nginx
git branch -r
```

- 列出所有本地分支和远程分支

```nginx
git branch -a
```

- 新建一个分支，但依然停留在当前分支

```nginx
git branch [branch-name]
```

- 新建一个分支，并切换到该分支

```nginx
git checkout -b [branch]
```

- 新建一个分支，指向指定commit

```nginx
git branch [branch] [commit]
```

- 新建一个分支，与指定的远程分支建立追踪关系

```nginx
git branch —track [branch] [remote-branch]
```

- 切换到指定分支，并更新工作区

```nginx
git checkout [branch-name]
```

- 切换到上一个分支

```nginx
git checkout -
```

- 建立追踪关系，在现有分支与指定的远程分支之间

```nginx
git branch —set-upstream [branch] [remote-branch]
```

- 合并指定分支到当前分支

```nginx
git merge [branch]
```

- 选择一个commit，合并进当前分支

```nginx
git cherry-pick [commit]
```

- 删除分支

```nginx
git branch -d [branch-name]
```

- 删除远程分支

```nginx
git push origin —delete [branch-name]

git branch -dr [remote/branch]
```

### 3.2.6标签

- 列出所有tag

```nginx
git tag
```

- 新建一个tag在当前commit

```nginx
git tag [tag]
```

- 新建一个tag在指定commit

```nginx
git tag [tag] [commit]
```

- 删除本地tag

```nginx
git tag -d [tag]
```

- 删除远程tag

```nginx
git push origin :refs/tags/[tagName]
```

- 查看tag信息

```nginx
git show [tag]
```

- 提交指定tag

```nginx
git push [remote] [tag]
```

- 提交所有tag

```nginx
git push [remote] —tags
```

- 新建一个分支，指向某个tag

```nginx
git checkout -b [branch] [tag]
```

### 3.2.7查看信息

- 显示有变更的文件

```nginx
git status
```

- 显示当前分支的版本历史

```nginx
git log
```

- 显示commit历史，以及每次commit发生变更的文件

```nginx
git log —stat
```

- 搜索提交历史，根据关键词

```nginx
git log -S [keyword]
```

- 显示某个commit之后的所有变动，每个commit占据一行

```nginx
git log [tag] HEAD —pretty=format:%s
```

- 显示某个commit之后的所有变动，其”提交说明”必须符合搜索条件

```nginx
git log [tag] HEAD —grep feature
```

- 显示某个文件的版本历史，包括文件改名

```nginx
git log —follow [file]
git whatchanged [file]
```

- 显示指定文件相关的每一次diff

```nginx
git log -p [file]
```

- 显示过去5次提交

```nginx
git log -5 —pretty —oneline
```

- 显示所有提交过的用户，按提交次数排序

```nginx
git shortlog -sn
```

- 显示指定文件是什么人在什么时间修改过

```nginx
git blame [file]
```

- 显示暂存区和工作区的差异

```nginx
git diff
```

- 显示暂存区和上一个commit的差异

```nginx
git diff —cached [file]
```

- 显示工作区与当前分支最新commit之间的差异

```nginx
git diff HEAD
```

- 显示两次提交之间的差异

```nginx
git diff [first-branch]…[second-branch]
```

- 显示今天你写了多少行代码

```nginx
git diff —shortstat “@{0 day ago}”
```

- 显示某次提交的元数据和内容变化

```nginx
git show [commit]
```

- 显示某次提交发生变化的文件

```nginx
git show —name-only [commit]
```

- 显示某次提交时，某个文件的内容

```nginx
git show [commit]:[filename]
```

- 显示当前分支的最近几次提交

```nginx
git reflog
```

### 3.2.8远程同步

- 下载远程仓库的所有变动

```nginx
git fetch [remote]
```

- 显示所有远程仓库

```nginx
git remote -v
```

- 显示某个远程仓库的信息

```nginx
git remote show [remote]
```

- 增加一个新的远程仓库，并命名

```nginx
git remote add [shortname] [url]
```

- 取回远程仓库的变化，并与本地分支合并

```nginx
git pull [remote] [branch]
```

- 上传本地指定分支到远程仓库

```nginx
 git push [remote] [branch]
```

- 强行推送当前分支到远程仓库，即使有冲突

```nginx
 git push [remote] —force
```

- 推送所有分支到远程仓库

```nginx
git push [remote] —all
```

### 3.2.9撤销

- 恢复暂存区的指定文件到工作区

```nginx
git checkout [file]
```

- 恢复某个commit的指定文件到暂存区和工作区

```nginx
git checkout [commit] [file]
```

- 恢复暂存区的所有文件到工作区

```nginx
git checkout .
```

- 重置暂存区的指定文件，与上一次commit保持一致，但工作区不变

```nginx
git reset [file]
```

- 重置暂存区与工作区，与上一次commit保持一致

```nginx
git reset —hard
```

- 重置当前分支的指针为指定commit，同时重置暂存区，但工作区不变

```nginx
git reset [commit]
```

- 重置当前分支的HEAD为指定commit，同时重置暂存区和工作区，与指定commit一致

```nginx
git reset —hard [commit]
```

- 重置当前HEAD为指定commit，但保持暂存区和工作区不变

```nginx
git reset —keep [commit]
```

- 新建一个commit，用来撤销指定commit,后者的所有变化都将被前者抵消，并且应用到当前分支

```nginx
git revert [commit]
```

- 暂时将未提交的变化移除，稍后再移入

```nginx
git stash

git stash pop
```

### 3.2.10其他

- 生成一个可供发布的压缩包

```nginx
git archive
```

# 四.将本地的文件推送到远程仓库

## 4.1进入本地仓库

- 进入本地仓库后会在目录后有**(master)**提示(命令详见**5.0常用命令**)

![image-20221024204425771](img\image-20221024204425771.png)

## 4.2创建、添加文件

### 4.2.1创建文件，并用vim适当添加内容用于测试

![image-20221024204515184](C:\Users\Administrator\Desktop\git\img\image-20221024204515184.png)

```nginx
touch test.c
vim test.c
```

### 4.2.2添加文件到缓存区

![image-20221024205113368](img\image-20221024205113368.png)

```nginx
git add test.c
```

## 4.3提交到本地仓库

![image-20221024205253879](img\image-20221024205253879.png)

```nginx
git commit -m "Update"
```

**注意：-m后双引号内必须填写内容才允许提交**

## 4.4连接远程仓库

![image-20221024205857195](img\image-20221024205857195.png)

```nginx
git remote add origin git@github.com:ShenShizhe/Test.git
```

## 4.5将本地文件push到远程仓库

![image-20221024210106547](img\image-20221024210106547.png)

```nginx
git push  -u origin master
```

- **origin**是远程主机名，**master**是远程分支名

## 4.6查看远程仓库

![image-20221024210257475](img\image-20221024210257475.png)

# 五.常用命令

```nginx
cd			改变目录
cd..		回到上一个目录，直接cd进入默认目录
pwd			显示当前所在的目录路径
ls(ll)		列出当前目录中的所有文件
touch		创建一个文件
rm			删除一个文件
mkdir		新建一个目录
rm -r		删除文件夹
mv			移动文件、重命名
reset		重新初始化终端/清屏
clear		清屏
history		查看历史命令
help		帮助
exit		退出
#			表示注释
```

# 六.将本地代码上传github

前言
搜资料的时候，看到很多朋友都把源码放到了GitHub上托管，于是我也产生了把自己的代码上传到GitHub上的想法。此文针对初学者，手把手教你完成任务。

## 6.1.注册GitHub账号
到[https://github.com](https://github.com/) 注册GitHub账号。然后登录，并且通过邮箱认证。

## 6.2.在GitHub上建立仓库
（1）点击右方的“new repository”按钮新建一个仓库。

（2）之后填写名字（自己起一个），点击【Create repository】;注意不要勾选Initialize this repository with a README.

（3）找到仓库的地址
上面的工作完成之后，会出现一个提示页面，找到下图方框里的内容，这个就是你的仓库地址。在后文我们会用到它。

## 6.3.下载并安装git客户端
到http://git-scm.com/downloads 下载并安装git版本管理工具，这是一个客户端。

## 6.4.配置用户名和邮件地址
（1）在【开始】菜单，打开Git Bash

（2）配置用户名和邮件地址
我们需要设置一个用户名和邮箱, 当把本地仓库上传到GitHub后, 在GitHub中会显示代码上传者。

在Git Bash中输入以下命令。假设用户名是Tom，邮件地址是[TomWhite@163.com](mailto:TomWhite@163.com)

git config —global user.name “Tom”
git config —global user.email “[TomWhite@163.com](mailto:TomWhite@163.com)”
1
2
## 6.5.生成SSH密钥
注意：这里的命令请使用注册GitHub账号时登记的邮箱。
输入如下命令

ssh-keygen -t rsa -C “[hello@163.com](mailto:hello@163.com)”
1
连续3个回车（如果不需要密码的话）。最后得到了两个文件：私钥id_rsa和公钥id_rsa.pub。

## 6.6.添加密钥到ssh-agent
ssh-agent相当于一个密钥管理器，运行ssh-agent以后，使用ssh-add命令将私钥交给ssh-agent保管。

eval “$(ssh-agent -s)”
1
然后，

ssh-add ~/.ssh/id_rsa
1
## 6.7.登陆Github, 添加SSH公钥
- 在右上方找到【Settings】，然后点击【SSH and GPG keys】

- 点击右上角的【New SSH Key】
- Title自己起一个
- 复制粘贴id_rsa.pub文件的内容
- 找到本地的.ssh文件夹，用记事本程序打开id_rsa.pub文件并复制文件内容，粘贴到那个方框里。最后点击【Add SSH Key】

## 6.8.测试公钥是否添加成功
在Git Bash中输入命令

ssh -T [git@github.com](mailto:git@github.com)
1
然后输入yes，如果看到Hi后面是你的用户名，那么说明成功了。类似下图。

## 6.9.创建本地仓库并上传代码到GitHub
找到自己要分享上传的代码文件夹，鼠标右键选择Git Bash，或者在Git Bash中进入这个文件夹。

### 6.9.1初始化本地仓库
git init
1
这个命令会在当前目录下建立一个.git文件夹。

### 6.9.2选择要添加进本地仓库的文件
git add .
1
这个命令会d。

### 6.9.3提交文件到本地仓库

git commit -m ‘first commit’
1
-m后面跟一个参数，表示说明，将代码提交到GitHub后，将会在代码文件信息上显示这个说明，如下图。
注意：Git每次提交代码，都要写 Commit message（提交说明），否则就不允许提交。

### 6.9.4添加远程主机
git remote add origin [git@github.com](mailto:git@github.com):XXX/XXX.git
1
这个[git@github.com](mailto:git@github.com):XXX/XXX.git就是之前创建仓库生成的地址，也是远程主机的地址；origin是远程主机名。

### 6.9.5把本地仓库上传到GitHub
git push -u origin master

# 七.常见报错即处理方法

## 7.1[warning: LF will be replaced by CRLF](https://blog.csdn.net/u012757419/article/details/105614028)

## 7.2[remote origin already exists](https://cloud.tencent.com/developer/article/1880265)

## 7.3[On branch masterYour branch is up to date with 'origin/master'.](https://blog.csdn.net/qq_36079972/article/details/100279562)








​	

