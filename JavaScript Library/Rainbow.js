
/*---------------------------------------------
* Name:  Rainbow Benzene

* -------------------------------------------*/
 window.addEventListener("load", (event) => {
        const canvas = document.createElement("canvas");

        document.body.style.backgroundColor = "black";
        document.body.append(canvas);

        const c = canvas.getContext("2d");
        canvas.width = window.innerWidth;
        canvas.height = window.innerHeight;

        let colors = ["red", "purple", "blue", "green", "orange", "yellow"];
        let counter = 0;
        let scale = 0.5;
        let speed = 20;
        
        function turtle() {
          let rotation = 2 * Math.sin(counter / (3.14 * speed));
          this.draw = () => {
            for (let i = 0; i < 300; i++) {
              c.strokeStyle = colors[i % 6];
              c.lineWidth = i / 100 + 1;
              c.beginPath();
              c.moveTo(0, 0);
              c.lineTo(0, i);
              c.stroke();
              c.translate(0, i);
              c.rotate(((-60 + rotation) * 2 * Math.PI) / 360);
            }
          };

          draw();
        }

        function animate() {
          c.setTransform(scale, 0, 0, scale, innerWidth / 2, innerHeight / 2);
          c.clearRect(
            -innerWidth,
            -innerHeight,
            innerWidth * 5,
            innerHeight * 5
          );

          turtle();
          window.requestAnimationFrame(animate);
          counter++;
        }

        animate();
      });
