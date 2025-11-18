<script setup>
import InputRoast from '~/components/InputRoast.vue';
</script>

<template>
    <NuxtLayout name="home">
        <div class="roast-page">
            <p class="roast-page__title">
                <span class="roast-page__title-top">Roast your</span>
                <span class="roast-page__title-bottom">&lt;/Github profile&gt;</span>
            </p>
            <div class="roast-page__card">
                <div class="roast-page__card-top">
                    <InputRoast />
                </div>
                <img class="roast-page__card-bg" src="/img/roast-card-bg.png" alt="">
                <img class="roast-page__card-cat" src="/img/roast-card-cat.png" alt="">
                <div class="roast-page-card-shadow" />
            </div>
        </div>
    </NuxtLayout>
</template>

<style scoped>
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
    font-size: 50px;
}

.roast-page__title-bottom {
    font-weight: 300;
    font-size: 25px;
}

.roast-page__card {
    position: relative;
    flex: 1;
    max-width: 400px;
    border-radius: 52px 52px 0 0;
    display: flex;
    justify-content: center;
    align-items: start;
    overflow: hidden;
}

.roast-page__card-top {
    position: absolute;
    top: 0;
    width: 100%;
    height: 100px;
    padding: 16px;
    box-sizing: border-box;
}

img.roast-page__card-bg {
    width: 100%;
    height: 100%;
    object-fit: cover;
}

img.roast-page__card-cat {
    position: absolute;
    bottom: 0px;
    width: 300px;
    height: auto;
}

.roast-page-card-shadow {
    position: absolute;
    bottom: 0px;
    width: 100%;
    height: 100px;
    background: linear-gradient(to top, #000, transparent)
}
</style>