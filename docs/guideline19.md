## Strategyパターン
Visitorパターンは処理追加をバリエーションポイントとして容易にするのに対し、
Strategyパターンは型追加をバリエーションポイントとして容易にする。

## 短所
- 処理の実装詳細を切り離しても、その処理は型に依存しているため具象化の一部になっていまうこと
- バリエーションポイントを早めに特定できなければ、十分な効果を得られないこと
- 基底クラスを用いると間接参照が増えて実行性能が損なわれること(実装に高い柔軟性と実装追加が容易な構造のための犠牲)
- 手動によるメモリ割り当てが多くメモリフラグメンテーションを発生させること
- 処理を追加すると基底クラスが増加する。またポインタが多いためインスタンスサイズも肥大化すること
