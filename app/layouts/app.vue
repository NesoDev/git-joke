<template>
    <div class="v-app layout-app">
        <header class="app-navigation">
            <button>&lt; Back</button>
            <h1>
                git<span aria-hidden="true"> --</span>joke
            </h1>
        </header>
        <main class="app-main">
            <NuxtPage />
        </main>
        <footer class="app-footer">
            <div class="app-footer__metadata" role="contentinfo">
                <p class="app-footer__author" aria-label="author">Made by NesoDev</p>
                <div class="app-footer__socials" aria-label="socials">
                    <a href="https://github.com/NesoDev">
                        <img src="/icons/ic_github.svg" alt="">
                    </a>
                    <a href="https://www.linkedin.com/in/avendano-meza-ever-frank/">
                        <img src="/icons/ic_linkedin.svg" alt="">
                    </a>
                </div>
            </div>
            <div class="app-footer__copyright">
                <h4 class="app-footer__copyright__text">Copyright ©️ {{ getYear() }} | GitJoke. All rights reserved.
                </h4>
            </div>
        </footer>
    </div>
</template>

<script lang="ts" setup>
const getYear = () => {
    const d = new Date()
    return d.getFullYear()
}
</script>

<style scoped>
/** ---------------- General ----------------*/
.v-app {
    width: 100dvw;
    height: fit-content;
    overflow: hidden;
}

/** ---------------- Header ----------------*/
.app-navigation {
    position: relative;
    width: 100%;
    height: 35px;
    background: #000;
    display: flex;
    flex-direction: row;
    align-items: center;
    justify-content: start;
    padding: 0px 20px;
    box-sizing: border-box;
    outline: 1px solid #2F2F2F;
}

button {
    padding: 0;
    border: none;
    background: none;
}

h1 {
    font-family: 'SF Pro Text', sans-serif;
    font-weight: 700;
    font-size: 18px;
    color: #fff;
    position: absolute;
    width: fit-content;
    height: fit-content;
    inset: 0;
    margin: auto;
}

/** ---------------- Main ----------------*/
.app-main {
    width: 100%;
    height: fit-content;
}

/** ---------------- Footer ----------------*/
.app-footer {
    position: relative;
    width: 100%;
    height: 70px;
    background: #000000;
}

.app-footer__metadata {
    position: absolute;
    top: -80px;
    width: 100%;
    height: 80px;
    display: flex;
    flex-direction: column;
    align-items: center;
    justify-content: center;
    gap: 5px;
}

.app-footer__author {
    margin: 0;
    font-family: 'SF Pro Text', sans-serif;
    font-weight: 400;
    font-size: 14px;
    color: #7C838B;
}

.app-footer__socials {
    display: flex;
    flex-direction: row;
    gap: 10px;
}

.app-footer__copyright {
    position: relative;
    width: 100%;
    height: 70px;
    display: flex;
    align-items: center;
    justify-content: center;
}

.app-footer__copyright::after {
    content: "";
    position: absolute;
    top: 0;
    width: 100%;
    height: 1px;
    background: #2F2F2F;
    pointer-events: none;
}

.app-footer__copyright__text {
    margin: 0;
    font-family: 'SF Pro Text', sans-serif;
    font-weight: 200;
    font-size: 14px;
    color: #7C838B;
}
</style>