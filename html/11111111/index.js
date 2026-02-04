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

    guessResu.textContent = "Game Restart";
    guessResu.style.backgroundColor = "";

    Guess.value = "";
    Guess.disabled = false;

    resetGuess.style.display = "none";

}

