<template>
    <div class="input-roast">
        <input type="text" name="username" autocomplete="off" placeholder="Enter username">
        <button>
            <img src="/icons/ic_arrow.svg" alt="">
        </button>
    </div>
</template>

<style scoped>
.input-roast {
    position: relative;
    width: 100%;
    height: 75px;
    background: #000;
    border-radius: 37.5px;
}

input {
    width: 100%;
    height: 100%;
    border: none;
    margin: 0;
    padding: 0px 80px 0px 30px;
    font-family: "FiraCode", sans-serif;
    font-weight: 400;
    font-size: 20px;
    color: #ffffff;
    box-sizing: border-box;
    background: transparent;
}

input::placeholder {
    color: #7C838B;
}

input:focus {
  outline: none;
  box-shadow: none;
}

button {
    border: none;
    margin: none;
    padding: 0;
    position: absolute;
    top: 50%;
    transform: translateY(-50%);
    right: 10px;
    aspect-ratio: 1 / 1;
    height: calc(100% - 20px);
    border-radius: 100%;
    background: #ffffff;
    display: flex;
    justify-content: center;
    align-items: center;
}

button img {
    aspect-ratio: 1 / 1;
    width: 60%;
}
</style>