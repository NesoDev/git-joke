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
                <h4 class="app-footer__copyright__text">Copyright &copy; {{ getYear() }} | GitJoke. All rights reserved.
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
    display: flex;
    flex-direction: row;
    align-items: center;
    justify-content: start;
    padding: 0 var(--s-size-5);
    box-sizing: border-box;
    outline: 1px solid var(--border-tertiary);
}

button {
    padding: 0;
    border: none;
    background: none;
}

h1 {
    font-family: -apple-system, BlinkMacSystemFont,
        "SF Pro Display", "SF Pro Text", "Inter",
        "Helvetica Neue", Helvetica, Arial, sans-serif;
    font-weight: 700;
    font-size: var(--r-size-4);
    color: var(--text-primary);
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
    gap: var(--s-size-2);
}

.app-footer__metadata:hover .app-footer__author {
    color: var(--text-primary);
}

.app-footer__author {
    margin: 0;
    font-family: -apple-system, BlinkMacSystemFont,
        "SF Pro Display", "SF Pro Text", "Inter",
        "Helvetica Neue", Helvetica, Arial, sans-serif;
    font-weight: 300;
    font-size: var(--r-size-4);
    color: var(--text-secondary);
    transition: color 0.3s ease;
}

.app-footer__socials {
    height: 19px;
    display: flex;
    flex-direction: row;
    gap: var(--s-size-3);
}

.app-footer__socials a img {
    transition: filter 0.3s ease;
}

.app-footer__socials a img:hover {
    filter: brightness(0) invert(1);
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
    background: var(--border-tertiary);
    pointer-events: none;
}

.app-footer__copyright__text {
    margin: 0;
    font-family: -apple-system, BlinkMacSystemFont,
        "SF Pro Display", "SF Pro Text", "Inter",
        "Helvetica Neue", Helvetica, Arial, sans-serif;
    font-weight: 200;
    font-size: var(--r-size-4);
    color: var(--text-secondary);
}
</style>