## ガイドライン9
抽象化は依存関係を削除する効果があり、将来の変更の独立性を高められる

## 依存関係逆転の原則
- 柔軟性が最も高いシステムは、抽象化のみに依存し、具象実装には依存しない設計である
　(依存関係を管理するには、具象型や実装詳細ではなくて抽象化に依存すべき)
- 上位に位置するモジュールは下位に依存すべきでない
- 抽象化は実装詳細に依存すべきでない、実装詳細は抽象化に依存すべきである

## 用語
- トランザクション：100%成功か処理を巻き戻す
