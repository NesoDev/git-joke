<script setup>
import InputRoast from '~/components/InputRoast.vue';
</script>

<template>
    <NuxtLayout name="home">
        <svg width="0" height="0" style="position: absolute; left: -9999px; top: -9999px;" aria-hidden="true" focusable="false">
            <defs>
                <clipPath id="roast-clip" clipPathUnits="objectBoundingBox">
                    <path d="M 0 0.206452 C 0 0.134187 0 0.098054 0.015146 0.070453 C 0.028468 0.046174 0.049726 0.026434 0.075872 0.014064 C 0.105597 0 0.144509 0 0.222333 0 H 0.777667 C 0.855491 0 0.894402 0 0.924127 0.014064 C 0.950275 0.026434 0.971531 0.046174 0.984854 0.070453 C 1 0.098054 1 0.134187 1 0.206452 V 1 H 0 V 0.206452 Z" />
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
    font-size: clamp(40px, 15vw, 80px);
}

.roast-page__title-bottom {
    font-weight: 300;
    font-size: 30px;
}

.roast-page__card {
    position: relative;
    width: calc(100vw - 40px);
    max-width: 500px;
    height: 60%;
    display: flex;
    justify-content: center;
    align-items: start;
    -webkit-clip-path: url(#roast-clip);
    clip-path: url(#roast-clip);
}

.roast-page__card-top {
    position: absolute;
    top: 0;
    width: 100%;
    height: 100px;
    padding: 20px 21px;
    box-sizing: border-box;
    display: flex;
    flex-direction: column;
    align-items: center;
}

img.roast-page__card-bg {
    width: 100%;
    height: 100%;
    object-fit: cover;
}

img.roast-page__card-cat {
    position: absolute;
    bottom: 0px;
    width: 80%;
    height: auto;
}

.roast-page-card-shadow {
    position: absolute;
    bottom: -10px;
    width: 100%;
    height: 200px;
    background: linear-gradient(to top, #000, transparent)
}
</style>