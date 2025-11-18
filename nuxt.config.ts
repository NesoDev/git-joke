export default defineNuxtConfig({
  compatibilityDate: "2025-07-15",
  devtools: { enabled: false },

  app: {
    head: {
      title: "GitJoke",
      link: [
        {
          rel: "preload",
          href: "/fonts/SFPro-Text/SF-Pro-Text-Bold.woff2",
          as: "font",
          type: "font/woff2",
          crossorigin: "anonymous",
        },
      ],
    },
  },

  css: ["@/assets/css/global.css", "@/assets/css/fonts.css"],

  modules: ["@nuxt/eslint", "@nuxt/fonts", "@nuxt/image", "@nuxt/test-utils"],
});
