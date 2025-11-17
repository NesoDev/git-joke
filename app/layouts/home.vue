<template>
    <div class="layout-home">
        <nav class="home-navigation">
            <ul class="home-navigation__list">
                <li class="home-navigation__list-left">
                    <NuxtLink to="/home/roast" aria-label="to roast">
                        <img src="@/assets/icons/ic_roast.svg" alt="" aria-hidden="true">
                        <h2>Roast</h2>
                    </NuxtLink>
                </li>
                <li class="home-navigation__list-left" aria-label="to comparison">
                    <NuxtLink to="/home/comparison">
                        <img src="@/assets/icons/ic_comparison.svg" alt="" aria-hidden="true">
                        <h2>Comparison</h2>
                    </NuxtLink>
                </li>
                <li class="home-navigation__list-right" aria-label="to leaderboard">
                    <NuxtLink to="/home/leaderboard">
                        <img src="@/assets/icons/ic_leaderboard.svg" alt="" aria-hidden="true">
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
/** ---------------- General ----------------*/

.layout-home {
    width: 100%;
    height: calc(100dvh - 40px);
    display: flex;
    flex-direction: column;
    padding: 20px;
    box-sizing: border-box;
}

/** ---------------- Nav ----------------*/

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
    flex-direction: row;
    align-items: center;
    justify-content: start;
    gap: 10px;
}

.home-navigation__list-right {
    position: absolute;
    right: 0px;
}

a {
    height: 100%;
    width: fit-content;
    height: 40px;
    border-radius: 20px;
    padding: 0px 12px;
    box-sizing: border-box;
    display: flex;
    flex-direction: row;
    justify-content: center;
    align-items: center;
    gap: 4px;
    text-decoration: none;
}

a.router-link-active {
    background: #fff;
}

a:not(.router-link-active) {
    background: #111111;
}

a h2 {
    margin: 0;
    font-family: "SF Pro Text";
    font-weight: 500;
    font-size: 18px;
}

a.router-link-active h2 {
    color: hsl(0, 0%, 0%);
}

a.router-link-active img {
    filter: brightness(0);
}

a:not(.router-link-active) h2 {
    color: #7C838B;
    font-weight: 400;
}


.home-navigation__list-right a {
    width: 40px;
    border-radius: 12px;
}
/** ---------------- Main ----------------*/

.home-main {
    flex: 1;
    width: 100%;
}
</style>