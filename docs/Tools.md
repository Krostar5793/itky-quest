## 今後作りたいツール

※完成済のものには横線を引いています。

- [~~push時にドット絵の枚数を数えてREADME.mdに反映させる~~](../.github/workflows/.yml)<br />
【仕様】
push時にGitHub Actionsのworkflowを走らせて`/dot-works`ディレクトリ内の`.img`ファイルの枚数を`counter.cpp`をコンパイルして生成した実行ファイルによって数え、`sed`コマンドを用いて`README.md`の特定の行に挿入する。

- [ドキュメントを簡単に書くマネージャ](../itky/)(開発中)<br />
  `/docs`ディレクトリ内の編集を効率的に行う。<br />
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

- [GUIでブラウザ上からドキュメントを効率的に編集するページ](../itky-gui/)(開発中)<br />
【仕様】
Vercelからホスティングされたページにアクセスし、特定のデベロッパーがGUIでドキュメントを変更できるようにする。ページからGitHub Actionsのworkflowをトリガーし、GitHub Actionsが内部で`itky`マネージャを動作させる。
ワークフローの叩き方は[ここ](https://scrapbox.io/nwtgck/GitHub_Actions%E3%82%92curl%E3%82%92%E4%BD%BF%E3%81%A3%E3%81%A6%E5%A4%96%E9%83%A8%E3%81%8B%E3%82%89%E5%AE%9F%E8%A1%8C%E3%81%99%E3%82%8B)あたりが参考になる。
