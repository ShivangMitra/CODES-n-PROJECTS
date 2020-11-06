//BASIC REGeX FUNCTIONS

// // let reg = /chintu/
// // let reg = /chintu/g //g is global flag
// // let reg = /chintu/i //i is case insensitivity flag
// // let reg = /chintu/ig //both together
// let reg = /chintu/g

// console.log(reg)
// console.log(reg.source)

// let s = "This is the great chintu... The chintu"

// console.log(reg.exec(s))
// console.log(reg.exec(s))
// console.log(reg.exec(s))

// console.log(reg.test(s))

// console.log(s.match(reg))

// console.log(s.search(reg))

// console.log(s.replace(reg, "PINTU"))




//METACHARACTERS

// let regex = /harry/
// regex = /^h/ //if string starts with
// regex = /ry$/ //if string ends with
// regex = /h.rry/ //any ONE character can come in the palce of the dot
// regex = /h*rry/ //any number characters can come in the palce of the asterisk
// regex = /hg?arryo?/ //the character before the ? is optional
// regex = /h\*rry/ //escaping the metacharacter

// let str = "harry is harry"

// console.log(regex.exec(str))

// if(regex.test(str)){
//     console.log(`The string "${str}" matches the expression "${regex.source}"`)
// }
// else{
//     console.log(`The string "${str}" not match the expression "${regex.source}"`)
// }





//CHARACTER SETS

// let regex = /harry/
// regex = /h[aty]rry/ // can be a, t or y
// regex = /h[a-z]rry/ // any alphabet
// regex = /h[^aty]rry/ // can NOT be a, t or y
// regex = /h[a-zA-Z]rr[yu0-9]/ // can be a-z or A-Z + can be y, u or 0-9
// regex = /h[a-zA-Z]rr[yu0-9][0-9]/ // we can have as many character sets as we want

// const str = "harry bhai"

// console.log(regex.exec(str))

// if(regex.test(str)){
//     console.log(`The string "${str}" MATCHES the expression "${regex.source}"`)
// }
// else{
//     console.log(`The string "${str}" NOT MATCH the expression "${regex.source}"`)
// }





//QUANTIFIERS

// let regex = /har{2}y/ // r can occur exactly 2 times
// regex = /har{0,2}y/ // r can occur 0 to 2 times
// regex = /(har){2}/ // har can occur exactly 2 times
// regex = /(har){2}([0-9]r){3}/ // har can occur exactly 2 times

// const str = "harhar1r4r7r bhai"

// console.log(regex.exec(str))

// if(regex.test(str)){
//     console.log(`The string "${str}" MATCHES the expression "${regex.source}"`)
// }
// else{
//     console.log(`The string "${str}" NOT MATCH the expression "${regex.source}"`)
// }





//SHORTHAND CHARACTER CLASSES

let regex = /\war/ // word character: _ or alphabet or number
regex = /\w+r1r/ // more than one word character then r1r
regex = /\Wbhai/ // non word character then bhai
regex = /\W+bhai/ // more than one non word character then bhai
regex = /\d999/ // any digit then 999
regex = /number \d999/ // number  + any digit then 999
regex = /number \d+/ // number  + more than one digit
regex = /\D999/ // non digit then 999
regex = /\D+999/ // more than one non digit then 999
regex = /\ska number/ // white-space then ka number
regex = /\s+ka number/ // more than one white-space then ka number
regex = /\Ska number/ // non white-space then ka number
regex = /\S+ka number/ // more than one non white-space then ka number
regex = /4r7r\b/ // wrod boundary means there is another word after 4r7r

//ASSERTIONS
regex = /h(?=y)/ // only match when it is y
regex = /h(?!y)/ // only match when it is NOT y

const str = "harhar1r4r7r %%$@bhai ka number 899999hyrry9999"

console.log(regex.exec(str))

if(regex.test(str)){
    console.log(`The string "${str}" MATCHES the expression "${regex.source}"`)
}
else{
    console.log(`The string "${str}" NOT MATCH the expression "${regex.source}"`)
}