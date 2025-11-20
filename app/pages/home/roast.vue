<script setup>
import InputRoast from '~/components/InputRoast.vue';

const metrics = reactive({
    roasts: { num: 358, counter: 0 },
    reactions: { num: 300, counter: 0 },
    forwards: { num: 300, counter: 0 },
})

const stats = computed(() => {
    const round = (n) => {
        if (n < 10) return n
        const r = n % 10
        return n - r
    }
    return {
        roasts: round(metrics.roasts.num),
        reactions: round(metrics.reactions.num),
        forwards: round(metrics.forwards.num)
    }
})

const sleep = (ms) => new Promise(resolve => setTimeout(resolve, ms))

const increase = async () => {
    while (
        metrics.roasts.counter !== stats.value.roasts ||
        metrics.reactions.counter !== stats.value.reactions ||
        metrics.forwards.counter !== stats.value.forwards
    ) {

        if (metrics.roasts.counter < stats.value.roasts) {
            metrics.roasts.counter++
        }
        if (metrics.reactions.counter < stats.value.reactions) {
            metrics.reactions.counter++
        }
        if (metrics.forwards.counter < stats.value.forwards) {
            metrics.forwards.counter++
        }

        await sleep(10)
    }
}

increase()
</script>

<template>
    <NuxtLayout name="home">
        <div class="roast-page">
            <p class="roast-page__title">
                <span class="roast-page__title-top">Roast your Github profile.</span>
            </p>
                <InputRoast />
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
    gap: 30px;
    color: hsl(240, 11%, 96%);
}

.roast-page__title {
    width: 100%;
    height: auto;
    margin: 0;
    display: flex;
    flex-direction: column;
    align-items: center;
    text-wrap: wrap;
    text-align: center;
    line-height: 350%;
}

.roast-page__title span {
    font-family: -apple-system, BlinkMacSystemFont,
        "SF Pro Display", "SF Pro Icons", "Helvetica Neue", "Helvetica", "Arial", sans-serif
}

.roast-page__title-top {
    font-weight: 600;
    font-size: clamp(25px, 18vw, 54px);
}

.roast-page__title-bottom {
    font-weight: 600;
    font-size: clamp(25px, 18vw, 54px);
}

.roast-page__card {
    position: relative;
    width: 400px;
    max-width: 100%;
    height: fit-content;
    background: rgb(0, 0, 0);
    border-radius: 56px;
    box-sizing: border-box;
    display: flex;
    flex-direction: column;
    align-items: center;
    justify-content: space-between;
    overflow: hidden;
}

.roast-page__card__flags {
    width: 100%;
    height: fit-content;
    display: flex;
    flex-wrap: wrap;
    flex-direction: row;
    justify-content: center;
    row-gap: 10px;
    column-gap: 70px;
    z-index: 2;
}

.flag {
    width: 142px;
    height: 56px;
    background: rgba(255, 255, 255, 0.5);
    border-radius: 28px;
    padding: 0px 25px 0px 8px;
    box-sizing: border-box;
    display: flex;
    flex-direction: row;
    align-items: center;
    gap: 6px;
}

.flag__box-img {
    height: calc(100% - 16px);
    aspect-ratio: 1 / 1;
    border-radius: 50%;
    display: flex;
    justify-content: center;
    align-items: center;
}

#flag-roasts {
    transform: rotate(-10deg);
}

#flag-roasts div {
    background: #ff3a3a;
}

#flag-reactions {
    transform: rotate(10deg);
}

#flag-reactions div {
    background: #842EFF;
}

#flag-forwards {
    transform: rotate(3deg);
}

#flag-forwards div {
    background: #FF1F8F;
}

.flag__box-img img {
    width: 70%;
}

.flag__box__text {
    margin: 0;
    display: flex;
    flex-direction: column;
    line-height: 120%;
    font-family: -apple-system, BlinkMacSystemFont,
        "SF Pro Display", "SF Pro Icons", "Helvetica Neue", "Helvetica", "Arial", sans-serif;
    color: #000000;
}

.flag__box__text-top {
    font-weight: 600;
    font-size: 22px;
}

.flag__box__text-bottom {
    font-weight: 500;
    font-size: 16px;
}

img.roast-page__card-bg {
    position: absolute;
    top: 0;
    left: 0;
    width: 100%;
    height: 100%;
    min-height: calc(100%);
    filter: brightness(0.2);
    object-fit: cover;
    pointer-events: none;
    z-index: 1;
}

img.roast-page__card-cat {
    width: 100%;
    height: auto;
    z-index: 2;
}

.roast-page-card-shadow {
    position: absolute;
    bottom: 0px;
    width: 100%;
    height: 300px;
    background: linear-gradient(to bottom, transparent, #000);
    pointer-events: none;
    z-index: 3;
}
</style>