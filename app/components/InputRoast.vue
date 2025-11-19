<script setup>
import { ref, onMounted } from 'vue'

const inputRef = ref(null)

onMounted(() => {
  const el = inputRef.value
  if (!el) return

  el.addEventListener("input", () => {
    el.value = el.value.replace(/ /g, "\u2003")
  })
})
</script>

<template>
  <div class="input-roast">
    <input ref="inputRef" type="text" name="username" autocomplete="off" placeholder="Enter username">
    <button>
      <img src="/icons/ic_arrow.svg" alt="">
    </button>
  </div>
</template>

<style scoped>
.input-roast {
  position: relative;
  width: 100%;
  height: 65px;
  background: rgba(0, 0, 0, 0.933);
  border-radius: 32.5px;
  backdrop-filter: blur(20px);
  -webkit-backdrop-filter: blur(20px);
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
  font-size: 18px;
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