let myVideo = document.querySelector('video');

myVideo.onclick = function() {
    let mySrc = myVideo.getAttribute('src');
    if (mySrc == 'https://vdn6.vzuu.com/SD/9a6a8c20-0a87-11ed-99fd-f256e25bba2b.mp4?pkey=AAUFeS_w-JZ2pGuFzUglDt2ETp0cM9ISa5i6tUDAG41jJncTJ-oEfXFgPeWTpsE2KaCPD48Kv2rF_QWIJXQBxU1u&c=avc.1.1&f=mp4&pu=078babd7&bu=078babd7&expiration=1658763455&v=ks6') {
        myVideo.setAttribute('src', 'https://vdn6.vzuu.com/SD/9e608fee-0a89-11ed-893f-02d3b133c4ae.mp4?pkey=AAWpsUgIxf3MfjV9SGszgc1v-iEHZNkEAN9gGsdWFSwv3fnQFAuCtwXcmsn8QmYtk1d-BGw5KSXsNQvieq19EH3W&c=avc.1.1&f=mp4&pu=078babd7&bu=078babd7&expiration=1658767295&v=ks6')
    } else {
        myVideo.setAttribute('src', 'https://vdn6.vzuu.com/SD/9a6a8c20-0a87-11ed-99fd-f256e25bba2b.mp4?pkey=AAUFeS_w-JZ2pGuFzUglDt2ETp0cM9ISa5i6tUDAG41jJncTJ-oEfXFgPeWTpsE2KaCPD48Kv2rF_QWIJXQBxU1u&c=avc.1.1&f=mp4&pu=078babd7&bu=078babd7&expiration=1658763455&v=ks6')
        
    }
}

let myButton = document.querySelector('button');
let myHeading = document.querySelector('h1');

function setUserName() {
    let myName = prompt('请输入你的名字~'); // 弹出一个可输入的对话框
    if (!myName) {
        setUserName();
    } else {
        localStorage.setItem('name', myName); // 将数据存储在浏览器中供后续获取
        myHeading.textContent = '你长得真的是太帅了，' + myName;
    }
}

if (!localStorage.getItem('name')) {
    setUserName();
} else {
    let storedName = localStorage.getItem('name');
    myHeading.textContent = '你长得真的是太帅了，' + myName;
}

myButton.onclick = function () {
    setUserName();
}