function func1(){
    return new Promise(function(resolve, reject){
        setTimeout(() => {
            const error = true
            if(!error)
            {
                console.log("Your promise has been resolved")
                resolve()
            }
            else{
                console.log("Your promise has been rejected")
                reject("Sorry not fulfilled")
            }
        }, 2000);
    })
}

func1().then(function(){
    console.log("Thanks for resolving")
}).catch(function(error){
    console.log(`${error}. Bade gande log hai`)
})