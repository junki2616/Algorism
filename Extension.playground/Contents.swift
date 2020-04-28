
//Extensionで作成した関数をオリジナルのものと区別させる


//exに型を追加するための骨組み
public protocol SomeCompatible {
    
    associatedtype CompatibleType
    var ex: CompatibleType { get }
}

//exの型を可変で定義
public final class RetType<Base> {
    
    let base: Base
    public init(_ base: Base) {
        
        self.base = base
    }
}

//CompatibleType
public extension SomeCompatible {
    
    var ex: RetType<Self> {
        
        return RetType(self)
    }
}

//あてはめる型を指定
extension String: SomeCompatible {}
extension Int: SomeCompatible {}


//可変で定義
extension RetType where  Base == String {
    
    public var count: Int {
        return base.count
    }
}

//可変で定義
extension RetType where  Base == Int {
    
    func printInt(target: Int) {
        
        print("\(target)")
    }
}

//Stringの場合
let str = "あいうえお"
str.ex.count

//Intの場合printIntを実行
let target = 12345
target.ex.printInt(target: target)

//① Int/StringにSomeCompatibleを追加 ②追加されることで中身が可変のexが使える ③RetTypeにより、型によって独自の処理を行うことができる
