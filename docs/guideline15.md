## Guideline15
Visitorパターン

## 動的多様性を使うとOCPの二面性に対応する必要がある
将来の拡張性に備えるのはどの部分かを明確な意思を持って判断しなければならない。

## 補足
手続型プログラミング:
- 長所: 処理の追加が容易
- 短所: 型の追加が苦痛(型を追加するごとに、Switch分のcaseが増えていき保守不可能になるため)

オブジェクト思考型プログラミング:
- 長所: 型の追加が容易
- 短所: 処理の追加が困難(基底classのモジュールサブセットに縛られるため)


## 用語
- RAII(Resource Acquisition Is Initialization): リソースの取得開放をオブジェクトでラッピングすることで管理を簡易化すること
