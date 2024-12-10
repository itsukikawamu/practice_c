# Cの書き方及びgitとgithubの使い方の練習
## 初期設定
```bash
#プロジェクトの作業ディレクトリをローカルに作成  
mkdir practice_c  
cd practice_c  
#gitリポジトリとして初期化。.gitという隠しディレクトリが作成されGitの管理対象になる  
git init
#src(ソースコード)とbin(コンパイル後の実行ファイル)の2つのに分けて管理するためサブディレクトリを作成します。  
mkdir src bin    
touch README.md .gitignore  
#GitHubにリモートリポジトリを追加します。このリポジトリにコードをプッシュできるようになります。   
git remote add origin https://github.com/itsukikawamu/practice_c.git
#.gitignoreファイルにbin/という行を追加し、binディレクトリ内のファイルをGitで管理しないように指定します。    
echo 'bin/' >> .gitignore  　　 
#変更されたファイルすべてをGitのインデックスに追加します。この時点ではまだコミットはされません。　　
git add .
#インデックスに追加された変更を「initial commit」というメッセージでコミットします。  
git commnit -m "initial commit"
#ローカルのmasterブランチの変更をリモートリポジトリ（GitHub）にプッシュします。-uオプションは、今後のgit pushがこのリモートブランチを対象にするように設定します。  
git push -u origin master    
```
## ファイルの編集
```
vim src/hello.c
#src/hello.cをコンパイルし、実行ファイルbin/helloを生成します。gccはC言語のコンパイラで、-oオプションで出力ファイル名を指定します。  
gcc src/hello.c -o bin/hello　　  
./bin/hello  
git add .  
git commit -m "hello,world!"  
git push
#リモートリポジトリ（GitHub）から最新の変更を取得する    
git pull origin master　　
```
## マークダウンの書き方を練習
### 小見出し
- **リスト**
- ---
- *リスト*  
- ***リストlist***  
- [このページのリンク](https://github.com/itsukikawamu/practice_c/blob/master/note.md)



