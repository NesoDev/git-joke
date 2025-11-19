<script setup>
import InputRoast from '~/components/InputRoast.vue';
</script>

<template>
    <NuxtLayout name="home">
        <svg width="0" height="0" style="position:absolute; left:-9999px; top:-9999px;">
            <defs>
                <clipPath id="roast-clip" clipPathUnits="objectBoundingBox">
                    <path
                        d="M 0 0.14 C 0 0.095 0.01 0.07 0.03 0.05 C 0.05 0.03 0.08 0.015 0.12 0.007 C 0.16 0 0.20 0 0.30 0 H 0.70 C 0.80 0 0.84 0 0.88 0.007 C 0.92 0.015 0.95 0.03 0.97 0.05 C 0.99 0.07 1 0.095 1 0.14 V 1 H 0 Z" />
                </clipPath>
            </defs>
        </svg>
        <div class="roast-page">
            <p class="roast-page__title">
                <span class="roast-page__title-top">Roast your</span>
                <span class="roast-page__title-bottom">&lt;/Github profile&gt;</span>
            </p>
            <div class="roast-page__card">
                <div class="roast-page__card-top">
                    <InputRoast />
                </div>
                <img class="roast-page__card-bg" src="/img/roast-card-bg-color.png" alt="">
                <img class="roast-page__card-cat" src="/img/roast-card-cat.svg" alt="">
                <div class="roast-page-card-shadow" />
            </div>
        </div>
    </NuxtLayout>
</template>

<style>
.roast-page {
    height: 100%;
    width: 100%;
    display: flex;
    flex-direction: column;
    justify-content: start;
    align-items: center;
    gap: 25px;
    color: white;
}

.roast-page__title {
    width: 100%;
    height: auto;
    margin: 0;
    display: flex;
    flex-direction: column;
    align-items: center;
}

.roast-page__title span {
    font-family: "SF Pro Text", sans-serif;
}

.roast-page__title-top {
    font-weight: 800;
    font-size: clamp(40px, 15vw, 60px);
}

.roast-page__title-bottom {
    font-weight: 300;
    font-size: 25px;
}

.roast-page__card {
    position: relative;
    width: calc(100vw - 40px);
    max-width: 400px;
    height: calc(100% - 200px);
    background: rgb(0, 0, 0);
    display: flex;
    justify-content: center;
    align-items: start;
    overflow: hidden;
}

.roast-page__card-top {
    position: absolute;
    top: 0;
    width: 100%;
    height: auto;
    padding: 20px 23px;
    box-sizing: border-box;
    display: flex;
    flex-direction: column;
    align-items: center;
    z-index: 2;
}

img.roast-page__card-bg {
    width: 100%;
    height: calc(100%);
    object-fit: cover;
    clip-path: url(#roast-clip);
    pointer-events: none;
}

img.roast-page__card-cat {
    position: absolute;
    bottom: 0px;
    width: 80%;
    height: auto;
}

.roast-page-card-shadow {
    position: absolute;
    bottom: 0px;
    width: 100%;
    height: 200px;
    background: linear-gradient(to bottom, transparent, #000);
    pointer-events: none;
}
</style>