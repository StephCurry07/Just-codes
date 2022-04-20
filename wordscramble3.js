// Encryption
    function encrypt(s, k){                 // changing the original message by converting the characters.
        var n = 26;
        if (k < 0) 
            return encrypt(s, k + n);
        return s.split('').map(function (c) {
                if (c.match(/[a-z]/i)) {
                    var code = c.charCodeAt();
                    var shift = code >= 65 && code <= 90 ? 65 : code >= 97 && code <= 122 ? 97 : 0;
                    return String.fromCharCode(((code - shift + k) % n) + shift);
                }
                return c;
            }).join('');
    }

    function modify(x){                     // changing the sequence of characters
        let encr_str = encrypt(x, x.length % 29);
        array = [...encr_str];              // to get array of characters
        let i = 0;
        while (i < array.length - 1) {      //swapping adjacent elements
            let t = array[i];
            array[i] = array[i + 1];
            array[i + 1] = t;
            i = i + 2;
        }
        return array.join("");
    }
    
modify("I am a boy.");
// Decryption


function decrypt(s, k){
    var n = 26;
    if (k < 0) 
    return decrypt(s, k + n);
    return s.split('').map(function (c) {
        if (c.match(/[a-z]/i)) {
            var code = c.charCodeAt();
            var shift = code >= 65 && code <= 90 ? 65 : code >= 97 && code <= 122 ? 97 : 0;
            return String.fromCharCode(((code - shift + k) % n) + shift);
        }
        return c;
    }).join('');
}
function modify_again(x){
    let encr_str = decrypt(x, - x.length % 29);
    array = [...encr_str];
    let i = 0;
    while (i < array.length - 1) {
        let t = array[i];
        array[i] = array[i + 1];
        array[i + 1] = t;
        i = i + 2;
    }
    return array.join("");
}
modify_again(" Txll m jz.")