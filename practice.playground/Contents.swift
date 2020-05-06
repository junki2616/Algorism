//protocol

protocol hogeProtocol{
    
    var setGet:Int {set get}
    var target:Int {get}
}


//setter getter
class hogeClass:hogeProtocol{
    
    var target:Int = 100
    var setGet: Int {
        
        get{
            return target + 10
        }
        
        set{
            target = newValue - 10
        }
    }
    
    
}

var hoge = hogeClass()
hoge.setGet
hoge.target

hoge.setGet = 80
hoge.setGet
hoge.target



//extension
var testString = "あいうえおか"
testString.plusString


extension String{
    
    var plusString: String{
        
        return "『\(self)』"
    }
}

