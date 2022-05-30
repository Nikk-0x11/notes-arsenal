const boxes = document.querySelectorAll(".box");

const checkBoxes = () => {
  const triggerBotton = (window.innerHeight / 5) * 4
  boxes.forEach((box) => {
    const boxTop = box.getBoundingClientRect().top
    if (boxTop < triggerBotton) box.classList.add("show")
  })
}

window.addEventListener("scroll", checkBoxes)
checkBoxes()