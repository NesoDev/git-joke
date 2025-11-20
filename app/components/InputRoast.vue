<script setup>
</script>

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
  width: 400px;
    max-width: 100%;
  height: 65px;
  background: #0E0E0E;
  border-radius: 32.5px;
  border: 1px solid #282828;
  backdrop-filter: blur(20px);
  -webkit-backdrop-filter: blur(20px);
  z-index: 2;
}

input {
  width: 100%;
  height: 100%;
  border: none;
  margin: 0;
  padding: 0px 80px 0px 30px;
  font-family: -apple-system, BlinkMacSystemFont,
    "SF Pro Display", "SF Pro Text", "Inter",
    "Helvetica Neue", "Helvetica", "Arial", sans-serif;
  font-weight: 300;
  font-size: 20px;
  color: #F5F5F7;
  line-height: 1.2353641176;
  letter-spacing: -0.022em;
  box-sizing: border-box;
  background: transparent;
}

input::placeholder {
  color: #F5F5F7;
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