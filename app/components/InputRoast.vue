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
  width: 500px;
  max-width: 100%;
  height: 60px;
  background: #1D1D1F;
  outline: 1px solid #3f3f3f;
  border-radius: 32.5px;
}

input {
  width: 100%;
  height: 100%;
  border: none;
  margin: 0;
  padding: 0px 80px 0px 30px;
  box-sizing: border-box;
  background: transparent;
  font-family: -apple-system, BlinkMacSystemFont,
    "SF Pro Display", "SF Pro Text", "Inter",
    "Helvetica Neue", "Helvetica", "Arial", sans-serif;
  color: var(--text-primary);
  /** mobile first */
  font-weight: 400;
  font-size: clamp(var(--r-size-5), 5vw, var(--r-size-8));
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

/** ========================================= */
@media (min-width: 688px) {
  .input-roast {
    height: 65px;
  }

  input {
    font-size: clamp(var(--r-size-4), 1.5vw, var(--r-size-5));
  }
}
</style>