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
  background: var(--bg-secondary);
  border-radius: 32.5px;
  border: 1px solid var(--border-secondary);
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
  font-weight: 400;
  font-size: var(--r-size-5);
  color: var(--text-primary);
  box-sizing: border-box;
  background: transparent;
}

input::placeholder {
  color: var(--text-inactive);
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
  background: var(--bg-primary);
  display: flex;
  justify-content: center;
  align-items: center;
}

button img {
  aspect-ratio: 1 / 1;
  width: 60%;
}
</style>