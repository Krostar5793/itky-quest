## 今後作りたいツール

※完成済のものには横線を引いています。

- ~~push時にドット絵の枚数を数えてREADME.mdに反映させる~~
【仕様】
push時にGitHub Actionsのworkflowを走らせて`/dot-works`ディレクトリ内の`.img`ファイルの枚数を`counter.cpp`をコンパイルして生成した実行ファイルによって数え、`sed`コマンドを用いて`README.md`の特定の行に挿入する。

- ドキュメントを簡単に書くマネージャ
  `/docs`ディレクトリ内の編集を効率的に行う。
  【仕様】
  `itky.exe`を環境変数として登録することによって`itky`エイリアスで使えるようにする。
  - commands
    - `add`
      新しい要素を追加する。
      - `Weapons`
      - `Armors`
      - `Items`
      - `Materials`
    - `research`
      特定のアイテムを探す。
      - `name=["name"]`
      - `rarity=["rarity"]`
      - `price=["price"]`
      - `effect=["effect"]`
      - `available=["available"]`
  - `options`
    - `-f`
      FROMオプション。`research`などで特定のファイルに絞って実行したいときに有効。
      `-f`の後に`[filename]`をつける(拡張子を含めない)。