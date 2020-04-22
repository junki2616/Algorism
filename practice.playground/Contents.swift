
protocol hogeProtocol{
    
    var setGet:Int {set get}
    var target:Int {get}
}


class hogeClass:hogeProtocol{
    
    var setGet: Int {
        
        set(p){
            target = p - 10
        }
        get{
            return target + 10
        }
    }
    
    var target:Int = 100
    
}



