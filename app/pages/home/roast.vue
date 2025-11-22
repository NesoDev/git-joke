<script setup>
import InputRoast from '~/components/InputRoast.vue';

const metrics = reactive({
    roasts: { num: 509, counter: 0 },
    reactions: { num: 108, counter: 0 },
    forwards: { num: 58, counter: 0 },
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
            <div class="page-top">
                <p class="page__title">
                    <span>Roast your </span>
                    <span>Github profile</span>
                </p>
                <InputRoast />
            </div>
            <div class="page-middle">
                <div id="roasts-metric" class="page__metric">
                    <div id="roast-icon" class="metric__icon"><img src="/icons/ic_fire.svg" alt=""></div>
                    <p class="metric__text">
                        <span class="metric__text-main">{{ `${stats.roasts < 10 ? "" : "+ "}${metrics.roasts.counter}`
                                }}</span>
                                <span class="metric__text-secondary">roasts</span>
                    </p>
                </div>
                <div id="roasts-metric" class="page__metric">
                    <div id="reaction-icon" class="metric__icon"><img src="/icons/ic_smile.svg" alt=""></div>
                    <p class="metric__text">
                        <span class="metric__text-main">{{ `${stats.reactions < 10 ? "" : "+ "
                            }${metrics.reactions.counter}` }}</span>
                                <span class="metric__text-secondary">reactions</span>
                    </p>
                </div>
                <div id="roasts-metric" class="page__metric">
                    <div id="forward-icon" class="metric__icon"><img src="/icons/ic_asterisk.svg" alt=""></div>
                    <p class="metric__text">
                        <span class="metric__text-main">{{ `${stats.forwards < 10 ? "" : "+ "
                            }${metrics.forwards.counter}` }}</span>
                                <span class="metric__text-secondary">forwards</span>
                    </p>
                </div>
            </div>
            <div class="page-bottom">
                <div class="roast__detail">
                    <p class="detail-text">
                        <span>Brutally honest.</span>
                        <span>Visually stunning.</span>
                    </p>
                    <NuxtLink class="detail-link" to="/home/leaderboard">
                        <span>View roasts of</span>
                        <span>other users ></span>
                    </NuxtLink>
                </div>
                <div class="roast__sample">
                    <div class="sample__card">
                        <video autoplay loop muted playsinline class="sample-video">
                            <source src="/media/ball.webm" type="video/webm">
                            <source src="/media/ball.mp4" type="video/mp4">
                        </video>
                    </div>
                    <div class="sample__card">
                        <video autoplay loop muted playsinline class="sample-video">
                            <source src="/media/kaleidoscope.webm" type="video/webm">
                            <source src="/media/kaleidoscope.mp4" type="video/mp4">
                        </video>
                    </div>
                    <div class="sample__card">
                        <video autoplay loop muted playsinline class="sample-video">
                            <source src="/media/fluid.webm" type="video/webm">
                            <source src="/media/fluid.mp4" type="video/mp4">
                        </video>
                    </div>
                </div>
            </div>
        </div>
    </NuxtLayout>
</template>

<style scoped>
/** ---------------- Page ----------------*/
.roast-page {
    height: 100%;
    width: 100%;
    display: flex;
    flex-direction: column;
    justify-content: space-between;
    align-items: center;
}

/** ---------------- Top ----------------*/
.page-top {
    width: 100%;
    height: fit-content;
    display: flex;
    flex-direction: column;
    align-items: center;
    padding: 0 var(--s-size-5);
    box-sizing: border-box;
    /** mobile first */
    gap: var(--s-size-5)
}

.page__title {
    margin: 0;
    display: flex;
    text-align: center;
    font-family: -apple-system, BlinkMacSystemFont,
        "SF Pro Display", "SF Pro Icons", "Helvetica Neue", "Helvetica", "Arial", sans-serif;
    color: var(--text-primary);
    /** mobile first */
    flex-direction: column;
    font-weight: 600;
    font-size: var(--r-size-9);
}

/** ---------------- Middle ----------------*/
.page-middle {
    width: fit-content;
    max-width: 100%;
    height: fit-content;
    padding: 0 var(--s-size-5);
    box-sizing: border-box;
    display: grid;
    grid-template-columns: repeat(3, 1fr);
    /** mobile first */
    gap: var(--s-size-5);
}

.page__metric {
    position: relative;
    background: var(--bg-quaternary);
    aspect-ratio: 1 / 1;
    /** mobile first */
    width: 100px;
    border-radius: var(--s-size-6);
}

.metric__icon {
    position: absolute;
    aspect-ratio: 1 / 1;
    box-sizing: border-box;
    border-radius: 50%;
    display: flex;
    justify-content: center;
    align-items: center;
    /** mobile first */
    width: 28px;
    top: var(--s-size-2);
    left: var(--s-size-2);
}

.metric__icon img {
    /** mobile first */
    width: 18px;
}

#roast-icon {
    background: #FF3030;
}

#reaction-icon {
    background: #842EFF;
}

#forward-icon {
    background: #FF1F8F;
}

.metric__text {
    position: absolute;
    margin: 0;
    font-family: -apple-system, BlinkMacSystemFont,
        "SF Pro Display", "SF Pro Icons", "Helvetica Neue", "Helvetica", "Arial", sans-serif;
    display: flex;
    flex-direction: column;
    align-items: end;
    /** mobile first */
    gap: 0px;
    bottom: var(--s-size-4);
    right: var(--s-size-4);
}

.metric__text-main {
    color: var(--text-primary);
    /** mobile first */
    font-weight: 600;
    font-size: var(--r-size-5);
}

.metric__text-secondary {
    color: var(--text-secondary);
    /** mobile first */
    font-weight: 300;
    font-size: var(--r-size-4);
}

/** ---------------- Bottom ----------------*/
.page-bottom {
    width: 100%;
    background: var(--bg-secondary);
    display: flex;
    flex-direction: column;
    align-items: center;
    gap: var(--s-size-5);
    /** mobile first */
    height: fit-content;
    padding: var(--s-size-6) var(--s-size-6) 80px var(--s-size-6);
    box-sizing: border-box;
    border-radius: var(--s-size-9) var(--s-size-9) 0 0;
    justify-content: start;
}

.roast__detail {
    height: fit-content;
    display: flex;
    flex-direction: row;
    justify-content: space-between;
    align-items: center;
    /** mobile first */
    width: 100%;
}

.detail-text {
    margin: 0;
    font-family: -apple-system, BlinkMacSystemFont,
        "SF Pro Display", "SF Pro Icons", "Helvetica Neue", "Helvetica", "Arial", sans-serif;
    color: var(--text-primary);
    /** mobile first */
    font-weight: 600;
    font-size: var(--r-size-5);
    display: flex;
    flex-direction: column;
}

.detail-link {
    text-decoration: none;
    font-family: -apple-system, BlinkMacSystemFont,
        "SF Pro Display", "SF Pro Icons", "Helvetica Neue", "Helvetica", "Arial", sans-serif;
    color: var(--text-link);
    font-weight: 300;
    /** mobile first */
    font-size: var(--r-size-4);
    display: flex;
    flex-direction: column;
}

.roast__sample {
    height: calc(100% - 80px);
    display: grid;
    grid-template-columns: repeat(3, 1fr);
    /** mobile first */
    width: 100%;
    background: gray;
    gap: var(--s-size-4);
}

.sample__card {
    display: flex;
    justify-content: center;
    align-items: center;
    border-radius: var(--s-size-8);

    background: linear-gradient(90deg,
            var(--bg-quaternary) 25%,
            rgba(255, 255, 255, 0.03) 50%,
            var(--bg-quaternary) 75%);
    background-size: 200% 100%;
    animation: shimmer 1.5s infinite;

    /** mobile first */
    aspect-ratio: 1 / 1;
    height: 100%;
    overflow: hidden;
}

@keyframes shimmer {
    0% {
        background-position: 200% 0;
    }

    100% {
        background-position: -200% 0;
    }
}

.sample__card video {
    height: 100%;
    object-fit: cover;
    display: block;
}

/** ======================================== */
/** ======================================== */
@media (min-width: 420px) {

    .roast__detail {
        max-width: 800px;
    }

    .roast__sample {
        max-width: 800px;
    }

    .detail-text {
        font-weight: 500;
        font-size: var(--r-size-6);
    }
}

/** ======================================== */
/** ======================================== */
@media (min-width: 660px) {

    .page__title {
        flex-direction: row;
        gap: var(--s-size-1);
    }

    .page-middle {
        gap: var(--s-size-8);
    }

    .page__metric {
        height: 120px;
        width: 120px;
        border-radius: var(--s-size-8);
    }

    .metric__icon {
        width: var(--s-size-9);
        top: var(--s-size-3);
        left: var(--s-size-3);
    }

    .metric__icon img {
        height: 24px;
        width: 24px;
    }

    .metric__text {
        gap: var(--s-size-0);
        bottom: var(--s-size-5);
        right: var(--s-size-5);
    }

    .metric__text-main {
        font-weight: 800;
        font-size: var(--r-size-6);
    }

    .page-bottom {
        height: 320px;
    }

    .detail-text {
        display: flex;
        flex-direction: row;
        gap: var(--s-size-3);
    }

    .detail-link {
        display: flex;
        flex-direction: row;
    }


    .sample__card {
        aspect-ratio: auto;
        max-height: 150px;
    }

    .sample__card video {
        width: 100%;
    }
}

/** ======================================== */
/** ======================================== */

@media (min-width: 1312px) {
    .page-top {
        gap: var(--s-size-7);
    }

    .page__title {
        font-weight: 500;
        font-size: var(--r-size-15);
    }

    .page-middle {
        gap: var(--s-size-5);
    }
}
</style>