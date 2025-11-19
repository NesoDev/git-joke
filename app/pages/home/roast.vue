<script setup>
import InputRoast from '~/components/InputRoast.vue';
</script>

<template>
    <NuxtLayout name="home">
        <div class="roast-page">
            <p class="roast-page__title">
                <span class="roast-page__title-top">Roast your</span>
                <span class="roast-page__title-bottom">Github profile</span>
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
    gap: 55px;
    color: #F5F5F7;
}

.roast-page__title {
    width: 100%;
    height: auto;
    margin: 0;
    display: flex;
    flex-direction: column;
    align-items: center;
    gap: 0px;
}

.roast-page__title span {
    font-family: -apple-system, BlinkMacSystemFont,
        "SF Pro Display", "SF Pro Icons", "Helvetica Neue", "Helvetica", "Arial", sans-serif
}

.roast-page__title-top {
    font-weight: 600;
    font-size: clamp(40px, 15vw, 60px);
}

.roast-page__title-bottom {
    font-weight: 600;
    font-size: clamp(40px, 15vw, 60px);
}

.roast-page__card {
    position: relative;
    width: calc(100vw - 40px);
    max-width: 400px;
    height: calc(100% - 300px);
    background: rgb(0, 0, 0);
    border-radius: 56px 56px 0 0;
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
    padding: 18px;
    box-sizing: border-box;
    display: flex;
    flex-direction: column;
    align-items: center;
    z-index: 2;
}

img.roast-page__card-bg {
    width: 100%;
    height: 100%;
    min-height: calc(100%);
    object-fit: cover;
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