const alarmSubmit = document.getElementById("alarmSubmit")

alarmSubmit.addEventListener("click", setAlarm)

var audio = new Audio('http://bruitages.free.fr/horloges/sonnette_reveil.wav')


function ringBell(){
    audio.play()
}

function setAlarm(e){
    e.preventDefault()
    const alarm = document.getElementById("alarm")
    alarmDate = new Date(alarm.value)
    now = new Date()

    let time_to_alarm = alarmDate - now

    if(time_to_alarm >= 0)
    {
        setTimeout(() => {
            ringBell()
        }, time_to_alarm);
    }
}