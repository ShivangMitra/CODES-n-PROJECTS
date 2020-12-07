score = 0;
cross = true;

audio = new Audio("music.mp3");
audioGO = new Audio("gameover.mp3");

setTimeout(() => {
    audio.play()
}, 1000);

document.onkeydown = function(e){
    if(e.keyCode == 87){
        dino = document.querySelector(".dino");
        dino.classList.add('animateDino');
        setTimeout(() => {
            dino.classList.remove('animateDino')
        }, 700);
    }
    
    if(e.keyCode == 68){
        dino = document.querySelector(".dino");
        dinoX = parseInt(window.getComputedStyle(dino, null).getPropertyValue('left'));
        dino.style.left = dinoX + 112 + "px";
    }

    if(e.keyCode == 65){
        dino = document.querySelector(".dino");
        dinoX = parseInt(window.getComputedStyle(dino, null).getPropertyValue('left'));
        dino.style.left = (dinoX - 112) + "px";
    }
}

setInterval(() => {
    dino = document.querySelector(".dino");
    gameOver = document.querySelector(".gameOver");
    obstacle = document.querySelector(".obstacle");

    dino_x = parseInt(window.getComputedStyle(dino, null).getPropertyValue('left'));
    dino_y = parseInt(window.getComputedStyle(dino, null).getPropertyValue('top'));

    obs_x = parseInt(window.getComputedStyle(obstacle, null).getPropertyValue('left'));
    obs_y = parseInt(window.getComputedStyle(obstacle, null).getPropertyValue('top'));

    offsetX = Math.abs(dino_x-obs_x)
    offsetY = Math.abs(dino_y-obs_y)

    if(offsetX<93 && offsetY<52){
        gameOver.style.visibility = 'visible';
        obstacle.classList.remove("obstacleAni")
        audio.pause();
        audioGO.play();
        setTimeout(() => {
            audioGO.pause();
        }, 3000);
    }
    else if(offsetX<145 && cross){
        score += 10;
        updateScore(score);
        cross = false;

        setTimeout(() => {
            cross = true;
        }, 1000);

        setTimeout(() => {
            animDuration = parseFloat(window.getComputedStyle(obstacle, null).getPropertyValue('animation-duration'));
            obstacle.style.animationDuration = (animDuration - 0.1) + "s";
        }, 500);
    }

}, 10);

function updateScore(score){
    scoreCont.innerHTML = "Your Score: " + String(score);
}