        // Get the buttons by their IDs
        const showQuantityBtn = document.getElementById('showQuantityBtn');
        const addToCartBtn = document.getElementById('addToCartBtn');
        const plus2Btn = document.getElementById('plus2Btn');
        const plus3Btn = document.getElementById('plus3Btn');
        const resetCartBtn = document.getElementById('resetCartBtn');

        let cartqty=0;


        // alet cart qty
        showQuantityBtn.addEventListener(
            'click',()=>{
                alert(`Cart Quantity: ${cartqty}`);
                console.log(cartqty);
            }
        );


        //add to cart +1

        addToCartBtn.addEventListener(
            'click',()=>{
                cartqty++;
                
            }
        );
        //add to cart +2
        plus2Btn.addEventListener(
            'click',()=>{
                cartqty+=2;
            }
        );
        //add to cart +3
        plus3Btn.addEventListener(
            'click',()=>{
                cartqty+=1000;
            }
        );

        //reset cart
        resetCartBtn.addEventListener("click",()=>{

            cartqty=0;
        }) ;

        