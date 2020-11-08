function updateClock() {
    let currentTime = new Date()

    let currentHour = currentTime.getHours()
    let currentMin = currentTime.getMinutes()
    let currentSec = currentTime.getSeconds()

    let timeOfDay = (currentHour < 12) ? "AM" : "PM"

    currentHour = (currentHour > 12) ? currentHour - 12 : currentHour
    currentHour = (currentHour == 0) ? 12 : currentHour

    currentHour = (currentHour < 10 ? "0": "") + currentHour
    currentMin = (currentMin < 10 ? "0": "") + currentMin
    currentSec = (currentSec < 10 ? "0": "") + currentSec

    let currentTimeStr = currentHour + ":" + currentMin + ":" + currentSec + " " + timeOfDay

    document.getElementById("clock").innerHTML = `<div>${currentTimeStr}</div>`
}

// setInterval(() => {
//     updateClock()
// }, 1000);