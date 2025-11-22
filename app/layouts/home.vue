<template>
    <div class="layout-home">
        <nav class="home-navigation">
            <ul class="home-navigation__list">
                <li class="home-navigation__list-left">
                    <NuxtLink to="/home/roast" aria-label="Roast">
                        <img src="/icons/ic_roast.svg" alt="" aria-hidden="true">
                        <h2>Roast</h2>
                    </NuxtLink>
                </li>
                <li class="home-navigation__list-left">
                    <NuxtLink to="/home/comparison" aria-label="Comparison">
                        <img src="/icons/ic_comparison.svg" alt="" aria-hidden="true">
                        <h2>Comparison</h2>
                    </NuxtLink>
                </li>
                <li class="home-navigation__list-right">
                    <NuxtLink to="/home/leaderboard" aria-label="Leaderboard">
                        <img src="/icons/ic_leaderboard.svg" alt="" aria-hidden="true">
                    </NuxtLink>
                </li>
            </ul>
        </nav>
        <div class="home-main">
            <slot />
        </div>
    </div>
</template>
<style scoped>
/* ---------------- General ---------------- */
.layout-home {
    width: 100%;
    height: calc(100dvh - 35px);
    display: flex;
    flex-direction: column;
    box-sizing: border-box;
    transition: height 0.3s ease;
    /** mobile first */
    gap: var(--s-size-8);
}

/* ---------------- Nav ---------------- */
.home-navigation {
    width: 100%;
    height: fit-content;
    padding: var(--s-size-5) var(--s-size-5) 0 var(--s-size-5);
    box-sizing: border-box;
}

.home-navigation__list {
    list-style: none;
    position: relative;
    margin: 0;
    padding: 0;
    width: 100%;
    height: 100%;
    display: flex;
    align-items: center;
    gap: var(--s-size-3);
}

.home-navigation__list-right {
    position: absolute;
    right: 0;
}

/* ---------------- Links ---------------- */
a {
    display: flex;
    align-items: center;
    gap: var(--s-size-1);
    padding: var(--s-size-2) var(--s-size-4);
    width: fit-content;
    border-radius: var(--s-size-6);
    box-sizing: border-box;
    text-decoration: none;
    background: var(--bg-tertiary);
    transition: background 0.15s ease;
}

a.router-link-active {
    background: var(--bg-primary);
}

a h2 {
    margin: 0;
    font-family: -apple-system, BlinkMacSystemFont,
        "SF Pro Text", "SF Pro Icons", Helvetica Neue, Helvetica, Arial, sans-serif;
    font-weight: 600;
    font-size: var(--s-size-4);
    transition: color 0.15s ease;
}

a.router-link-active h2 {
    color: var(--text-active);
}

a:not(.router-link-active) h2 {
    color: var(--text-primary);
}

a.router-link-active img {
    filter: brightness(0);
    transition: filter 0.15s ease;
}

a img {
    width: var(--s-size-6);
    aspect-ratio: 1 / 1;
    transition: filter 0.15s ease;
}

.home-navigation__list-right a {
    padding: var(--s-size-2);
    border-radius: var(--s-size-3);
}

/* ---------------- Main ---------------- */
.home-main {
    width: 100%;
    height: 100%;
}

/** ======================================== */
/** ======================================== */

@media (min-width: 1312px) {
    .layout-home {
        gap: var(--s-size-4);
    }
}
</style>