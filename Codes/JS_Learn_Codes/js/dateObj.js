let today = new Date()

console.log(today)

let otherDate = new Date("2-22-2001 04:54:08")
otherDate = new Date("Feb 22 2001")
otherDate = new Date("02/22/2001")

console.log(otherDate)

let a = otherDate.getDay()
a = otherDate.getDate()
a = otherDate.getMinutes()
a = otherDate.getSeconds()
a = otherDate.getHours()
a = otherDate.getTime()
a = otherDate.getMilliseconds()
a = otherDate.getMonth()
console.log(a)

otherDate.setDate(29)
otherDate.setMonth(9)
otherDate.setFullYear(1999)
console.log(otherDate)