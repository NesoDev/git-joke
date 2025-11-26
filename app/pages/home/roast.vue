<script setup>
import InputRoast from '~/components/InputRoast.vue';

const metrics = reactive({
    roasts: { num: 509, counter: 0 },
    reactions: { num: 108, counter: 0 },
    forwards: { num: 600, counter: 0 },
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
                    Roast your Github profile
                </p>
                <InputRoast />
            </div>
            <div class="page-bottom">
                <div class="page__metrics">
                    <div id="roasts-metric" class="metric-card">
                        <div id="roast-icon" class="metric-card__icon"><img src="/icons/ic_fire.svg" alt=""></div>
                        <p class="metric-card__text">
                            <span class="metric-card__text-main">{{ `${stats.roasts < 10 ? "" : "+ "
                                }${metrics.roasts.counter}` }}</span>
                                    <span class="metric-card__text-secondary">roasts</span>
                        </p>
                    </div>
                    <div id="roasts-metric" class="metric-card">
                        <div id="reaction-icon" class="metric-card__icon"><img src="/icons/ic_smile.svg" alt=""></div>
                        <p class="metric-card__text">
                            <span class="metric-card__text-main">{{ `${stats.reactions < 10 ? "" : "+ "
                                }${metrics.reactions.counter}` }}</span>
                                    <span class="metric-card__text-secondary">reactions</span>
                        </p>
                    </div>
                    <div id="roasts-metric" class="metric-card">
                        <div id="forward-icon" class="metric-card__icon"><img src="/icons/ic_asterisk.svg" alt=""></div>
                        <p class="metric-card__text">
                            <span class="metric-card__text-main">{{ `${stats.forwards < 10 ? "" : "+ "
                                }${metrics.forwards.counter}` }}</span>
                                    <span class="metric-card__text-secondary">forwards</span>
                        </p>
                    </div>
                </div>
                <div class="page__details">
                    <div class="details__text">
                        <p class="details__text-main">
                            Brutally honest. Visually stunning.
                        </p>
                        <NuxtLink class="details__text-link" to="/home/leaderboard">
                            View roasts of other users
                        </NuxtLink>
                    </div>

                    <div class="details__card">
                        <div class="details__card-media">
                            <video autoplay loop muted playsinline class="sample-video">
                                <source src="/media/ball.webm" type="video/webm">
                                <source src="/media/ball.mp4" type="video/mp4">
                            </video>
                        </div>
                        <div class="details__card-media">
                            <video autoplay loop muted playsinline class="sample-video">
                                <source src="/media/kaleidoscope.webm" type="video/webm">
                                <source src="/media/kaleidoscope.mp4" type="video/mp4">
                            </video>
                        </div>
                        <div class="details__card-media">
                            <video autoplay loop muted playsinline class="sample-video">
                                <source src="/media/fluid.webm" type="video/webm">
                                <source src="/media/fluid.mp4" type="video/mp4">
                            </video>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </NuxtLayout>
</template>

<style scoped>
/** ---------------- Page ----------------*/
.roast-page {
    width: 100%;
    height: fit-content;
    min-height: calc(100dvh - 115px);
    box-shadow: inset 0 0 1px 1px #00ff77;
    display: flex;
    flex-direction: column;
    align-items: center;
    justify-content: end;
    /** mobile first */
    gap: 5vh
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
    gap: var(--s-size-3)
}

.page__title {
    margin: 0;
    display: flex;
    text-align: center;
    justify-content: center;
    font-family: -apple-system, BlinkMacSystemFont,
        "SF Pro Display", "SF Pro Icons", "Helvetica Neue", "Helvetica", "Arial", sans-serif;
    color: var(--text-primary);
    /** mobile first */
    width: 12ch;
    font-weight: 700;
    font-size: 8vw;
}

/** ---------------- Bottom ----------------*/
.page-bottom {
    width: 100%;
    height: fit-content;
    display: flex;
    flex-direction: column;
    align-items: center;
    /** mobile first */
    gap: var(--s-size-10);
}

.page__metrics {
    padding: 0px var(--s-size-5);
    box-sizing: border-box;
    display: grid;
    grid-template-columns: repeat(3, 1fr);
    gap: 5%;
    /** mobile first */
    width: 100%;
    max-width: 500px;
}

.metric-card {
    position: relative;
    height: 100%;
    width: auto;
    aspect-ratio: 1 / 1;
    background: var(--bg-secondary);
    /** mobile first */
    border-radius: 30%;
}

.metric-card__icon {
    position: absolute;
    border-radius: 50%;
    width: auto;
    aspect-ratio: 1 / 1;
    background: var(--bg-tertiary);
    display: flex;
    justify-content: center;
    align-items: center;
    /** mobile first */
    top: 12%;
    left: 12%;
    height: 30%;
}

#roast-icon {
    background: #ff0000;
}

#reaction-icon {
    background: #1356ff;
}

#forward-icon {
    background: #ff1f5f;
}

.metric-card__icon img {
    /** mobile first */
    height: 60%;
}

.metric-card__text {
    position: absolute;
    display: flex;
    flex-direction: column;
    align-items: end;
    margin: 0;
    font-family: -apple-system, BlinkMacSystemFont,
        "SF Pro Display", "SF Pro Icons", "Helvetica Neue", "Helvetica", "Arial", sans-serif;
    /** mobile first */
    bottom: 15%;
    right: 15%;
    line-height: 5vw;
}

.metric-card__text-main {
    color: var(--text-primary);
    /** mobile first */
    font-weight: 700;
    font-size: 5vw;
}

.metric-card__text-secondary {
    color: var(--text-secondary);
    /** mobile first */
    font-weight: 500;
    font-size: 4vw;
}

.page__details {
    width: 100%;
    height: 100%;
    background: #0E0E0E;
    display: flex;
    flex-direction: column;
    align-items: center;
    box-sizing: border-box;
    /** mobile first */
    padding: var(--s-size-8) var(--s-size-5);
    gap: var(--s-size-6);
}

.details__text {
    height: fit-content;
    display: flex;
    flex-direction: row;
    justify-content: space-between;
    align-items: center;
    font-family: -apple-system, BlinkMacSystemFont,
        "SF Pro Display", "SF Pro Icons", "Helvetica Neue", "Helvetica", "Arial", sans-serif;
    /** mobile first */
    width: 100%;
    gap: var(--s-size-5);
}

.details__text-main {
    margin: 0;
    color: var(--text-primary);
    text-wrap: wrap;
    /** mobile first */
    font-weight: 700;
    font-size: 5vw;
    width: 20ch;
}

.details__text-link {
    text-align: end;
    text-decoration: none;
    color: var(--text-link);
    /** mobile first */
    font-weight: 200;
    font-size: 3.5vw;
}

.details__card {
    display: grid;
    grid-template-columns: repeat(3, 1fr);
    /** mobile first */
    width: 100%;
    gap: 4%;
}

.details__card-media {
    position: relative;
    height: 100%;
    width: auto;
    aspect-ratio: 1 / 1;
    display: flex;
    justify-content: center;
    align-items: center;
    overflow: hidden;
    /** mobile first */
    border-radius: 25%;
}

.details__card-media video {
    background: transparent;
    height: 100%;
    object-fit: cover;
}

/** ========================================= */
@media (min-width: 688px) {
    .roast-page {
        gap: 4dvh;
    }

    .page-top {
        gap: var(--s-size-6)
    }

    .page__title {
        width: 100%;
        width: 12ch;
        font-weight: 600;
        font-size: var(--r-size-15);
    }

    .page-bottom {
        gap: 6dvh;
    }

    .page__metrics {
        max-width: 480px;
    }

    .metric-card {
        border-radius: var(--s-size-9);
    }

    .metric-card__icon {
        top: var(--s-size-4);
        left: var(--s-size-4);
        height: var(--s-size-9);
    }

    .metric-card__icon img {
        height: var(--s-size-6);
    }

    .metric-card__text {
        bottom: var(--s-size-4);
        right: var(--s-size-4);
        line-height: 170%;
    }

    .metric-card__text-main {
        font-weight: 600;
        font-size: var(--r-size-7);
    }

    .metric-card__text-secondary {
        font-weight: 400;
        font-size: var(--r-size-4);
    }

    .details__text {
        max-width: 800px;
    }

    .details__text-main {
        width: 24ch;
        font-size: clamp(var(--r-size-7), 3vw, var(--r-size-7));
    }

    .details__text-link {
        font-size: clamp(var(--r-size-4), 1.6vw, var(--r-size-4));
    }

    .details__card {
        max-width: 800px;
        gap: 3%;
    }

    .details__card-media {
        aspect-ratio: 3 / 2;
        border-radius: 30px;
    }

    .details__card-media video {
        width: 100%;
    }
}

@media (min-width: 689px) and (max-width: 992px) {
    .page-bottom {
        gap: 13dvh;
    }
}
</style>