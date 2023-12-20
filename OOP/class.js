class Farm{
      

      constructor(area,size,name){
        this.area = area,
        this.size = size,
        this.name = name
      }
   
    //  volume = function(){
    //   console.log("Inside the function");
    //     return this.area*this.area* this.area;
     
      //  }

      set area(value){
        this._area  = value;
       }

     get area(){
        console.log("Inside the  getter");
        return this._area;
     }

}

const newobject = new Farm(30,300,"Akshay");
console.log(newobject.area);




// class using function
function Farm1 (area,size){
     this.area = area
     this.size = size

     this.greet = function(){
      console.log(`I am inside greet with size as : ${this.size}`);
     }


}

const newFarm = new Farm1(50,500);
console.log(newFarm.area);
newFarm.greet()
