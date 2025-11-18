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
    gap: 30px;
    padding: 20px;
    box-sizing: border-box;
    transition: height 0.3s ease;
}

/* ---------------- Nav ---------------- */
.home-navigation {
    width: 100%;
    height: 40px;
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
    gap: 10px;
}

.home-navigation__list-right {
    position: absolute;
    right: 0;
}

/* ---------------- Links ---------------- */
a {
    display: flex;
    align-items: center;
    gap: 4px;
    padding: 0 12px;
    height: 40px;
    width: fit-content;
    border-radius: 20px;
    box-sizing: border-box;
    text-decoration: none;
    background: #111;
    /* inactive default */
    transition: background 0.15s ease;
}

a.router-link-active {
    background: #fff;
}

a h2 {
    margin: 0;
    font-family: "SF Pro Text", sans-serif;
    font-weight: 500;
    font-size: 18px;
    transition: color 0.15s ease;
}

a.router-link-active h2 {
    color: #000;
}

a:not(.router-link-active) h2 {
    color: #7C838B;
}

a.router-link-active img {
    filter: brightness(0);
    transition: filter 0.15s ease;
}

a img {
    width: 26px;
    height: 26px;
    transition: filter 0.15s ease;
}

/* Special case: leaderboard icon-only box */
.home-navigation__list-right a {
    width: 40px;
    padding: 0;
    border-radius: 12px;
    justify-content: center;
}

/* ---------------- Main ---------------- */
.home-main {
    width: 100%;
    height: 100%;
}
</style>