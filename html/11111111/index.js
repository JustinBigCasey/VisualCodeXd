// console.log("ni")
// console.log("deez nuts")

// window.alert("You are going to die!")

document.getElementById("myH1").textContent = "JAVA TRASH";

let age = 18;
let Name = "Da Vinki";
let gay = true;

console.log(`The type of age is ${typeof (age)}`);
console.log(`You are ${age} years old`);
console.log(`Your name is ${Name}`)
console.log(`Fortnite is gay: ${gay}`)
console.log(`Your age in 5 more years: ${age + 5}`)


document.getElementById("pipi1").textContent = `Your name is ${Name}`
document.getElementById("pipi2").textContent = `You are ${age} years old`
document.getElementById("pipi3").textContent = `Fortnite is gay: ${gay}`


// let username = window.prompt("Enter your username name: ");

// console.log(`username: ${username}`)

let username;

document.getElementById("mySub").onclick = function () {
    event.preventDefault();

    username = document.getElementById("myUser").value;
    username = username.trim().charAt(0).toUpperCase() + username.trim().slice(1).toLowerCase();

    console.log(`username: ${username}`)
    document.getElementById("Welcum").textContent = `HELLO ${username}`;
}

/*
function handleSubmit(event) {
    event.preventDefault(); // Ngăn không gửi request

    // Lấy dữ liệu từ form
    const formData = new FormData(event.target);
    const data = Object.fromEntries(formData.entries());

    console.log("Dữ liệu form:", data);

    // Hiển thị thông báo với tất cả dữ liệu
    let message = "Đã nhận dữ liệu:\n";
    message += `Tên: ${data.fname || 'Chưa nhập'}\n`;
    message += `Tuổi: ${data.cuniage || 'Chưa nhập'}\n`;
    message += `Email: ${data.pass || 'Chưa nhập'}\n`; // Note: bạn có 2 field name="pass"
    message += `SĐT: ${data.tel || 'Chưa nhập'}\n`;
    message += `Sinh nhật: ${data.bdate || 'Chưa nhập'}\n`;
    message += `Số con: ${data.quantity || '1'}\n`;
    message += `Giới tính: ${data.sex || 'Chưa chọn'}\n`;
    message += `Trường: ${data.school || 'Gehena'}\n`;
    message += `Xác nhận: ${data.niggerconfirm ? 'Đã xác nhận' : 'Chưa xác nhận'}`;

    alert(message);

    // Reset form nếu muốn
    // event.target.reset();

    // Hoặc hiển thị dữ liệu trên trang
    displayData(data);
}

// Hàm hiển thị dữ liệu trên trang
function displayData(data) {
    const displayDiv = document.getElementById('dataDisplay') || createDisplayDiv();

    displayDiv.innerHTML = `
        <h3>Thông tin đã nhập:</h3>
        <p><strong>Tên:</strong> ${data.fname || 'Chưa nhập'}</p>
        <p><strong>Tuổi:</strong> ${data.cuniage || 'Chưa nhập'}</p>
        <p><strong>Email:</strong> ${data.pass || 'Chưa nhập'}</p>
        <p><strong>SĐT:</strong> ${data.tel || 'Chưa nhập'}</p>
        <p><strong>Sinh nhật:</strong> ${data.bdate || 'Chưa nhập'}</p>
        <p><strong>Số con:</strong> ${data.quantity || '1'}</p>
        <p><strong>Giới tính:</strong> ${data.sex || 'Chưa chọn'}</p>
        <p><strong>Trường:</strong> ${data.school || 'Gehena'}</p>
        <p><strong>Xác nhận:</strong> ${data.niggerconfirm ? '✅ Đã xác nhận' : '❌ Chưa xác nhận'}</p>
    `;
}

// Tạo div để hiển thị dữ liệu nếu chưa có
function createDisplayDiv() {
    const div = document.createElement('div');
    div.id = 'dataDisplay';
    div.style.backgroundColor = '#f0f0f0';
    div.style.padding = '20px';
    div.style.marginTop = '20px';
    div.style.borderRadius = '10px';
    document.querySelector('form').after(div);
    return div;
}

// Gắn sự kiện submit khi trang tải xong
document.addEventListener('DOMContentLoaded', function () {
    const form = document.getElementById('myForm');
    if (form) {
        form.addEventListener('submit', handleSubmit);
    }
});
*/

// let agy = window.prompt("How old are you?")
// agy = Number(agy)
// agy += 1

// console.log(agy, typeof age);

const PI = Math.PI;
const cirsub = document.getElementById("cirsub")
let radius;
let circumference;

cirsub.onclick = function () {
    event.preventDefault();

    radius = Number(document.getElementById("cir").value);

    circumference = 2 * PI * radius

    circumference = circumference.toFixed(5);

    document.getElementById("CircleRadius").innerHTML = `Circle Radius: <span class = "resu">${circumference}</span> cm`;
}



// Counter Program

const decreaseBut = document.getElementById("decreaseBut");
const resetBut = document.getElementById("resetBut");
const increaseBut = document.getElementById("increaseBut");
const countLabel = document.getElementById("countLabel");
let count = 0;

function randomColor() {
    return `rgb(${Math.floor(Math.random() * 256)},
                ${Math.floor(Math.random() * 256)},
                ${Math.floor(Math.random() * 256)})`;
}

function randomHoverColor() {
    return `hsl(${Math.random() * 360}, 90%, 60%)`;
}

increaseBut.onclick = function (e) {
    e.preventDefault();
    count++;
    countLabel.textContent = count;

    if (count % 1 === 0) {
        document.querySelectorAll(".buttuns").forEach(btn => {
            btn.style.setProperty("--btn-color", randomColor());
            btn.style.setProperty("--btn-hover", randomHoverColor());
        });
    }
};

resetBut.onclick = function (e) {
    e.preventDefault();
    count = 0;
    countLabel.textContent = count;
};

decreaseBut.onclick = function (e) {
    e.preventDefault();
    count--;
    countLabel.textContent = count;

    if (count % 1 === 0) {
        document.querySelectorAll(".buttuns").forEach(btn => {
            btn.style.setProperty("--btn-color", randomColor());
            btn.style.setProperty("--btn-hover", randomHoverColor());
        });
    }
};


// Randum number

// Lấy ngày hôm nay (YYYY-MM-DD)
const today = new Date().toISOString().slice(0, 10);
console.log(today);

// Lấy dữ liệu đã lưu
let savedDate = localStorage.getItem("randumDate");
let todayRandum = localStorage.getItem("randumNumber");

// Nếu chưa có hoặc sang ngày mới → random lại
if (savedDate !== today || todayRandum === null) {
    todayRandum = Math.floor(Math.random() * 100001);
    localStorage.setItem("randumDate", today);
    localStorage.setItem("randumNumber", todayRandum);
}

// Hiển thị mỗi số một màu
let randumNumColors = "";

for (let char of String(todayRandum)) {
    randumNumColors += `<span style="color:${randomColor()}">${char}</span>`;
}

document.getElementById("randumNum").innerHTML = randumNumColors;



// gay age

const myTextu = document.getElementById("myTextu");
const submitTextu = document.getElementById("submitTextu")
const resultAge = document.getElementById("resultAge")
let age1;

submitTextu.onclick = function (e) {
    e.preventDefault();

    age1 = Number(myTextu.value);
    if (age1 === 0) {
        resultAge.textContent = `FUCK YOU`
    }

    else if (age1 >= 100) {
        resultAge.textContent = `You are dead NIGGEr`
    }

    else if (age1 >= 18 && age1 < 25) {
        resultAge.textContent = `You can watch porn in here`
    }

    else if (age1 < 0) {
        resultAge.textContent = `You are not even real NIGGA`
    }

    else if (age1 >= 25 && age1 <= 50) {
        resultAge.textContent = `WHAT THE FUCK ARE YOU DOING HERE UNC`
    }

    else {
        resultAge.textContent = `You can NOT do porn stuff`
    }
}


// randum check 

const gayCheck = document.getElementById("gayCheck");
const visaBut = document.getElementById("visaBut");
const masterBut = document.getElementById("masterBut");
const paypalBut = document.getElementById("paypalBut");
const acceptPay = document.getElementById("acceptPay");
const gayResu = document.getElementById("gayResu");
const payResu = document.getElementById("payResu");

acceptPay.onclick = function (e) {
    e.preventDefault();

    if (gayCheck.checked) {
        gayResu.textContent = `YOU ARE GAY AS FUCK NIGGA`;
        gayResu.style.color = "rgb(219, 93, 211)";
    }

    else {
        gayResu.textContent = `BASED`;
        gayResu.style.color = "rgb(28, 197, 19)";
    }


    if (visaBut.checked) {
        payResu.textContent = `You are paying this shit with Visa`;
        payResu.style.color = "rgb(9, 168, 221)";
    }

    else if (masterBut.checked) {
        payResu.textContent = `Master Card User LMAO`;
        payResu.style.color = "rgb(9, 168, 221)r";
    }

    else if (paypalBut.checked) {
        payResu.textContent = `NIGGA USING PAYPAL!??!!?!?! 😂😂😂😂😂`;
        payResu.style.color = "rgb(9, 168, 221)";
    }

    else {
        payResu.textContent = `PAY FOR MY RENT NIGGA`;
        payResu.style.color = "rgb(197, 99, 19)";
    }

}


// GRADE GRADING

const myGrade = document.getElementById("myGrade");
const gradeResu = document.getElementById("gradeResu");
const acceptGrade = document.getElementById("acceptGrade");

myGrade.addEventListener("input", function () {
    if (this.value > 100) this.value = 100;
    if (this.value < 0) this.value = 0;
});

acceptGrade.onclick = function (e) {
    e.preventDefault();

    const grade = Number(myGrade.value);

    switch (true) {
        case grade >= 90:
            gradeResu.textContent = "A";
            gradeResu.style.color = "rgb(9, 255, 0)";
            break;

        case grade >= 80:
            gradeResu.textContent = "B";
            gradeResu.style.color = "rgb(34, 165, 30)";
            break;

        case grade >= 70:
            gradeResu.textContent = "C";
            gradeResu.style.color = "rgb(190, 207, 43)";
            break;

        case grade >= 60:
            gradeResu.textContent = "D";
            gradeResu.style.color = "rgb(255, 187, 28)";
            break;

        default:
            gradeResu.textContent = "F";
            gradeResu.style.color = "rgb(255, 28, 28)";
    }
}



// String test

const randumgay = "  Fortnite Balls 123-1234-555";

console.log(randumgay.charAt(4));
console.log(randumgay.indexOf("B"));
console.log(randumgay.lastIndexOf("l"));
console.log(randumgay.length);
console.log(randumgay.trim());
console.log(randumgay.toUpperCase());
console.log(randumgay.toLowerCase());
console.log(randumgay.repeat(4));
console.log(randumgay.startsWith(" "));
console.log(randumgay.endsWith(" "));
console.log(randumgay.includes("t"));
console.log(randumgay.replaceAll("-", " NIGGER "));
console.log(randumgay.padStart(36, "GAY "));
console.log(randumgay.padEnd(44, "NI"));
console.log(randumgay.slice(2, 10));
console.log(randumgay.slice(11, 16));
console.log(randumgay.slice(2, randumgay.lastIndexOf(" ")));
console.log(randumgay.slice(randumgay.lastIndexOf(" "), randumgay.length))


radd.innerHTML = "";

for (let i = 0; i < 5; i++) {
    radd.innerHTML += `<span>${Math.floor(Math.random() * 101)}</span><br>`;
}



// NUMBER GUESISNG GAMEE 

let NumToGuess = Math.floor(Math.random() * 101)
const Guess = document.getElementById("Guess");
const acceptGuess = document.getElementById("acceptGuess");
const guessResu = document.getElementById("guessResu");
const resetGuess = document.getElementById("resetGuess");
let turns = 0;
let GuessWin = false;

resetGuess.style.display = "none";

acceptGuess.onclick = function (e) {
    e.preventDefault();

    const GuessVal = Number(Guess.value)
    turns++

    if (GuessWin) return;

    if (GuessVal < NumToGuess) {
        guessResu.textContent = "The Number is HIGHER";
        guessResu.style.backgroundColor = "rgb(255, 198, 28)"
    }

    else if (GuessVal > NumToGuess) {
        guessResu.textContent = "The Number is LOWER";
        guessResu.style.backgroundColor = "rgb(253, 107, 44)"
    }

    else if (GuessVal == NumToGuess) {
        turns++
        guessResu.textContent = `🎉 YOU WON IN ${turns} TURNS 🎉`;
        guessResu.style.backgroundColor = "rgb(9, 255, 0)"

        resetGuess.style.display = "flex";
        Guess.disabled = true;
    }


}

resetGuess.onclick = function (e) {
    e.preventDefault();

    turns = 0;
    GuessWin = false;
    NumToGuess = Math.floor(Math.random() * 101)

    guessResu.textContent = "Game Restarted";
    guessResu.style.backgroundColor = "";

    Guess.value = "";
    Guess.disabled = false;

    resetGuess.style.display = "none";

}

let x = 36;

func1();
func2()

function func1() {
    globalThis.y = 666;;
    console.log(x)

}

function func2() {
    console.log(globalThis.y)
}


// TEMPATURE CONVERTSION

const temBox = document.getElementById("temBox");
const toFah = document.getElementById("toFah");
const toCel = document.getElementById("toCel");
const conRes = document.getElementById("conRes");
const radios = document.querySelectorAll(".convete");
const convertButt = document.getElementById("convertButt");
const conve = document.getElementById("conve");
const ConvTempe = document.getElementById("ConvTempe");
let temp;


function blueConvert() {
    temBox.style.backgroundColor = "hsl(220, 79%, 59%)"; // xanh dương đậm

    radios.forEach(radio => {
        radio.style.accentColor = "hsl(251, 63%, 42%)";
    })

    convertButt.addEventListener("mouseenter", () => {
        convertButt.style.backgroundColor = "hsla(227, 88%, 39%, 0.565)";
    });

    convertButt.addEventListener("mouseleave", () => {
        convertButt.style.backgroundColor = "hsla(227, 91%, 25%, 0.565)";
    });

    conve.style.color = "hsl(227, 100%, 50%)";
    conRes.style.color = "hsl(227, 100%, 50%)";

    ConvTempe.style.backgroundColor = "hsl(219, 70%, 91%)";

    ConvTempe.style.boxShadow = "1px 1px 33px hsla(220, 72%, 61%, 0.342)";
};

function greenConvert() {
    temBox.style.backgroundColor = "hsl(140, 76%, 60%)"; // xanh lá
    radios.forEach(radio => {
        radio.style.accentColor = "hsl(118, 63%, 42%)"
    });

    convertButt.addEventListener("mouseenter", () => {
        convertButt.style.backgroundColor = "hsla(129, 96%, 44%, 0.56)"
    });

    convertButt.addEventListener("mouseleave", () => {
        convertButt.style.backgroundColor = "hsla(129, 85%, 29%, 0.56)"
    });

    conve.style.color = "hsl(126, 96%, 43%)";
    conRes.style.color = "hsl(126, 96%, 43%)";

    ConvTempe.style.backgroundColor = "hsl(124, 77%, 88%)";

    ConvTempe.style.boxShadow = "1px 1px 33px hsla(111, 72%, 61%, 0.34)";
};

function yellowConvert() {
    temBox.style.backgroundColor = "hsl(35, 90%, 55%)"; // cam

    radios.forEach(radio => {
        radio.style.accentColor = "hsl(53, 63%, 42%)";
    });

    convertButt.addEventListener("mouseenter", () => {
        convertButt.style.backgroundColor = "hsla(48, 98%, 48%, 0.88)"
    });

    convertButt.addEventListener("mouseleave", () => {
        convertButt.style.backgroundColor = "hsla(48, 78%, 43%, 0.88)"
    });

    conve.style.color = "hsl(45, 78%, 45%)";
    conRes.style.color = "hsl(45, 78%, 45%)";

    ConvTempe.style.backgroundColor = "hsl(52, 72%, 85%)";

    ConvTempe.style.boxShadow = "1px 1px 33px hsla(60, 72%, 61%, 0.34)";
};

function redConvert() {
    temBox.style.backgroundColor = "hsl(0, 85%, 55%)"; // đỏ rực

    radios.forEach(radio => {
        radio.style.accentColor = "hsla(11, 84%, 49%, 0.88)";
    })

    convertButt.addEventListener("mouseenter", () => {
        convertButt.style.backgroundColor = "hsla(0, 93%, 61%, 0.78)";
    });

    convertButt.addEventListener("mouseleave", () => {
        convertButt.style.backgroundColor = "hsla(0, 88%, 39%, 0.78)";
    });

    conve.style.color = "hsl(0, 96%, 43%)";
    conRes.style.color = "hsl(0, 96%, 43%)";

    ConvTempe.style.backgroundColor = "hsl(0, 70%, 91%)";

    ConvTempe.style.boxShadow = "1px 1px 33px hsla(0, 72%, 61%, 0.34)";
};

function suparedConvert() {
    temBox.style.backgroundColor = "hsl(0, 67%, 43%)"; // đỏ sẫm

    temBox.style.boxShadow = "0 0 60px hsl(0, 100%, 60%)"; // glow 🔥

    radios.forEach(radio => {
        radio.style.accentColor = "hsl(0, 63%, 42%)";
    })

    convertButt.addEventListener("mouseenter", () => {
        convertButt.style.backgroundColor = "hsla(0, 71%, 42%, 0.56)";
    });

    convertButt.addEventListener("mouseleave", () => {
        convertButt.style.backgroundColor = "hsla(0, 92%, 18%, 0.56)";
    });

    conve.style.color = "hsl(0, 96%, 19%)";
    conRes.style.color = "hsl(0, 96%, 19%)";

    ConvTempe.style.backgroundColor = "hsl(0, 30%, 64%)";

    ConvTempe.style.boxShadow = "1px 1px 1000px hsla(0, 100%, 52%, 0.34)";

};

function convert() {

    let resultTemp;

    if (toFah.checked) {

        temp = Number(temBox.value);
        resultTemp = temp * 9 / 5 + 32;

        conRes.style.transform = "scale(1.15)"
        setTimeout(() => {
            conRes.textContent = resultTemp.toFixed(1) + "°F";
            conRes.style.transform = "scale(1)";
        }, 150);


        temBox.style.boxShadow = ""; // reset trước

        if (resultTemp < 68) {
            blueConvert()
        }

        else if (resultTemp < 105) {
            greenConvert()
        }

        else if (resultTemp < 149) {
            yellowConvert()
        }

        else if (resultTemp < 185) {
            redConvert()
        }

        else {
            suparedConvert()
        }
    }



    else if (toCel.checked) {


        temp = Number(temBox.value);
        resultTemp = (temp - 32) * 5 / 9;

        conRes.style.transform = "scale(1.15)"

        setTimeout(() => {
            conRes.textContent = resultTemp.toFixed(1) + "°C";
            conRes.style.transform = "scale(1)";
        }, 150);


        temBox.style.boxShadow = ""; // reset trước

        if (resultTemp < 20) {
            blueConvert()
        }

        else if (resultTemp < 41) {
            greenConvert()
        }

        else if (resultTemp < 65) {
            yellowConvert()
        }

        else if (resultTemp < 85) {
            redConvert()
        }

        else {
            suparedConvert()
        }
    }

    else {
        conRes.textContent = "Please select a unit"
        conRes.style.background = "";
        return;
    }

}


// arggay

let umas = ["Gold Ship", "Tokai Teio", "Mambo", "Gold City"];

umas[2] = "Matikanetannhauser";
umas.push("Marvelous Sunday");
umas.pop();
umas.unshift("Special Week");
umas.shift();
umas.sort().reverse();

let numOfUmas = umas.length
let idix = umas.indexOf("Tokai Teio")

console.log(umas);
console.log(numOfUmas)
console.log(idix)


for (let i = 0; i < umas.length; i++) {
    console.log(umas[i]);
}



// spreadd

let gaye = [1, 2, 3, 4, 5, 6, 7];
let maxgaye = Math.max(...gaye);
let mingaye = Math.min(...gaye);

console.log(maxgaye);
console.log(mingaye);

let niii = "Spread deez nuts";
let leteniii = [...niii].join("FUCK YOU");

console.log(leteniii);

let fruits = ["apple", "banana", "tomato", "nigger"];
let vegetables = ["potatoes", "carrots", "celery", "dog"];

let foods = [...fruits, ...vegetables, "eggs", "bread"];

console.log(foods);



// resstt paremaetrer

function openFridge(...futs) {
    console.log(...futs)
}

function getFut(...futs) {
    return futs;
}

const fut1 = "pizza";
const fut2 = "hambaga";
const fut3 = "susi";
const fut4 = "nigger";
const fut5 = "ramen";

openFridge(fut1, fut2, fut3, fut4, fut5);

const futs = getFut(fut1, fut2, fut3, fut4, fut5);

console.log(futs);


function avarage(...ava) {
    let result = 0
    for (let num of ava) {
        result += num;
    }

    return result / ava.length;
}

const tutou = avarage(53, 53, 57, 12, 76, 65);

console.log(`Yo avarage iz ${tutou}`)


function combaistrin(...strings) {
    return strings.join(" ");
}

const mistabest = combaistrin("Mr.", "Juliva", "Jimmey", "Davinky", "Fortnite", "Balls", "3==D");

console.log(mistabest);




// ROLL DA DICE

function rollDice() {

    const diceBox = Number(document.getElementById("diceBox").value);
    const diceResult = document.getElementById("diceResult");
    const diceImages = document.getElementById("diceImages");
    const values = [];
    const images = [];

    for (let i = 0; i < diceBox; i++) {
        const value = Math.floor(Math.random() * 6) + 1;
        values.push(value);
        images.push(`<img src="image/diceimages/${value}.png" alt="Dice ${value}">`);
    }

    diceResult.textContent = `Dice: ${values.join(' - ')}`;
    diceImages.innerHTML = images.join("");

}



// random passowrd

function generatePassword(length, includeLowercase, includeUppercase, includeNumbers, includeSymbols) {

    const lowercaseChar = "abcdefghijklmnopqrstuvwxyz";
    const uppercaseChar = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const numberChars = "0123456789";
    const symbolChars = "~!@#$%^&*()_-=+";

    let allowedChars = "";
    let password = "";

    allowedChars += includeLowercase ? lowercaseChar : "";
    allowedChars += includeUppercase ? uppercaseChar : "";
    allowedChars += includeNumbers ? numberChars : "";
    allowedChars += includeSymbols ? symbolChars : "";

    if (length <= 0) {
        return `(password length must be at least 1)`
    }
    if (allowedChars.length === 0) {
        return `(At least 1 set of characters needs to be selected)`
    }

    for (let i = 0; i < length; i++) {
        const randomIndex = Math.floor(Math.random() * allowedChars.length)
        password += allowedChars[randomIndex];
    }


    return password;

}

const passwordLength = 16;
const includeLowercase = true;
const includeUppercase = true;
const includeNumbers = true;
const includeSymbols = true;

const password = generatePassword(passwordLength,
    includeLowercase,
    includeUppercase,
    includeNumbers,
    includeSymbols);

console.log(`Generated password: ${password}`)



// calclbacka

helu(gutbai);

function helu(callback) {
    console.log("helo");
    callback();
}

function gutbai() {
    console.log("gutbai")
}



// foreach

let numma = [1, 2, 3, 4, 5, 6, 7, 8];

numma.forEach(double);
numma.forEach(display);

function double(element, index, array) {
    array[index] = element * 2;
}

function display(element) {
    console.log(element);
}



// mapu

const squre = numma.map(square)

console.log(squre)

function square(element) {
    return Math.pow(element, 2)
}

const dateh = ["2026-2-12", "2026-4-2", "2026-3-7", "2027-1-6"]
const fortmatteDateh = dateh.map(fortmatDate);

console.log(fortmatteDateh);

function fortmatDate(element) {
    const part = element.split("-");
    return `${part[1]}/${part[2]}/${part[0]}`;
}



//filter

let evenNumm = numma.filter(izEven);
let izadult = numma.filter(isAdult);
let wowo = fruits.filter(shortSords)

console.log(evenNumm);
console.log(izadult);
console.log(wowo)

function izEven(element) {
    return element % 2 === 0;
}

function isAdult(element) {
    return element > 18;
}

function shortSords(element) {
    return element.length < 6
}



// reducee

const prai = [1, 64, 7, 12, 10, 53, 11];

const tuto = prai.reduce(susu);

console.log(`$${tuto.toFixed(2)}`);

function susu(a, b) {
    return a + b
}



// arrow funciton

const helucu = (name, Gay) => {
    console.log(`I HATE NIGGA ${name}`)
    console.log(`FucK you ${Gay}`)
};

helucu("Fortnite balls", "Nigga");

const yues = prai.map((element) => Math.pow(element, 2));

console.log(yues)



// object this

const guy = {
    firstName: "Ricardo",
    lastName: "Milos",
    age: 23,
    isGay: true,
    umamusume: "gay",
    hate: "PICIKI",
    food: "dicks",
    mucu: function () { console.log(`${this.firstName} is eating ${this.food}`) },
    helucu: () => { console.log(`I HATE YOU ${guy.hate}`) },
}

console.log(`my name iz ${guy.lastName} ${guy.firstName}`);
console.log(`I am ${gay.umamusume} and ${age}`);
console.log(guy.isGay);
guy.helucu();
guy.mucu();



// constructor

function newGuy(name, gay, food, balls, color) {
    this.name = name,
        this.gay = gay,
        this.food = food,
        this.balls = balls,
        this.color = color,
        this.fuck = function () { console.log(`You are fucking a gay nigga ${this.name}`) }
}

const newGuy1 = new newGuy("ASh", true, "cums", 2, "red");
const newGuy2 = new newGuy("FortniteGay", false, "apple", 0, "pink");

console.log(newGuy1.balls);
console.log(newGuy2.food);

newGuy1.fuck();
newGuy2.fuck();



// classu

class Product {
    constructor(name, price) {
        this.name = name;
        this.price = price;
    }

    displayProduct() {
        console.log(`Product: ${this.name}`);
        console.log(`Price: $${this.price.toFixed(2)}`);
    }

    calculateTotal(saleTax) {
        return this.price + (this.price * saleTax);
    }

}

const salesTax = 0.05;

const product1 = new Product("Shirt", 20.99);
const product2 = new Product("Pants", 11.99);

product1.displayProduct();
product2.displayProduct();

const total = product1.calculateTotal(salesTax)
console.log(`Total: $${total.toFixed(2)}`)



// static 
class MathUtil {
    static gay = 0;
    static PI = 3.14159;

    static getDiameter(radius) {
        return radius * 2;
    }

    static getCircumference(radius) {
        return radius * this.PI * radius;
    }

    constructor(usegay) {
        this.usegay = usegay;
        MathUtil.gay++;
    }

    saygay() {
        console.log(`gay gay gay gay ${this.usegay}`)
    }

}

console.log(MathUtil.PI);
console.log(MathUtil.getDiameter(10));
console.log(MathUtil.getCircumference(10));

const user1 = new MathUtil("Gay")
const user2 = new MathUtil("NotGay")
const user3 = new MathUtil("FUCK")

console.log(user2.usegay)

user1.saygay();

console.log(MathUtil.gay);



// inheritance supa

class Animal {
    alive = true;

    constructor(name, age) {
        this.name = name;
        this.age = age;
    }

    move(speed) {
        console.log(`The ${this.name} moves at a speed of ${speed}km/h`)
    }
}

class Rabbit extends Animal {

    constructor(name, age, jumpSpeed) {
        super(name, age);
        this.jumpSpeed = jumpSpeed;
    }

    jump() {
        console.log(`This ${this.name} can jump`)
        super.move(this.jumpSpeed)
    }

}

class Fish extends Animal {

    constructor(name, age, swimSpeed) {
        super(name, age);
        this.swimSpeed = swimSpeed;
    }

    swim() {
        console.log(`This ${this.name} can swim`)
        super.move(this.swimSpeed)
    }
}

class Dog extends Animal {

    constructor(name, age, runSpeed) {
        super(name, age);
        this.runSpeed = runSpeed;
    }

    run() {
        console.log(`This ${this.name} can run`)
        super.move(this.runSpeed)
    }

}


const rabit = new Rabbit("Mafucka", 3, 69);
const fish = new Fish("Gaynu", 1, 30);
const dogg = new Dog("Doggy", 45, 211);

console.log(rabit.name);
console.log(fish.age);
console.log(dogg.runSpeed);

rabit.jump();
fish.swim();



// geter seter

class Person {

    constructor(firstName, lastName, age) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.age = age;
    }

    set firstName(newFirstName) {
        if (typeof newFirstName === "string" && newFirstName.length > 0) {
            this._firstName = newFirstName;
        }
        else {
            console.error("FUCK YOU NIGGA");
        }
    }

    set lastName(newLastName) {
        if (typeof newLastName === "string" && newLastName.length > 0) {
            this._lastName = newLastName;
        }
        else {
            console.error("FUCK YOU GAY ASS");
        }
    }

    set age(newAge) {
        if (typeof newAge === "number" && newAge >= 0) {
            this._age = newAge;
        }
        else {
            console.error("i am going to kill your mother");
        }
    }

    get firstName() {
        return this._firstName;
    }

    get lastName() {
        return this._lastName;
    }

    get age() {
        return this._age;
    }

    get fullName() {
        return this._firstName + " " + this._lastName;
    }

}


const ash = new Person(true, 12, "gay");

console.log(ash.firstName);
console.log(ash.lastName);
console.log(ash.age);


const yaya = new Person("Fortnite", "Balls", 14);

console.log(yaya.firstName);
console.log(yaya.lastName);
console.log(yaya.fullName);
console.log(yaya.age);



// shuffle

const cards = ['A', 2, 3, 4, 5, 6, 7, 8, 9, 10, 'J', 'Q', 'K'];

shuffle(cards);


console.log(cards);

function shuffle(array) {
    for (let i = array.length - 1; i > 0; i--) {
        const random = Math.floor(Math.random() * (i + 1));

        [array[i], array[random]] = [array[random], array[i]];
    }
}
