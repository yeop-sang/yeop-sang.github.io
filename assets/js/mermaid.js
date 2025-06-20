document.addEventListener("DOMContentLoaded", function() {
  const mmSkin = document.body.getAttribute("data-mm-skin") || "default";
  const mjsTheme = {
    "air": "default",
    "aqua": "default",
    "contrast": "neutral",
    "dark": "dark",
    "default": "default",
    "dirt": "forest",
    "neon": "dark",
    "mint": "mint",
    "plum": "dark",
    "sunrise": "default"
  }[mmSkin];

  mermaid.initialize({
    startOnLoad: false,
    theme: mjsTheme
  });

  mermaid.run({
    nodes: document.querySelectorAll('.language-mermaid'),
  });
});