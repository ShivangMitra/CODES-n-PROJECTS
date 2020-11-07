const data = [
    {
        name: 'Rohan Das',
        age: 18,
        city: 'Kolkata',
        language: 'Python',
        framework: 'Django',
        image: 'https://randomuser.me/api/portraits/men/51.jpg'
    },

    {
        name: 'Shubham Sharma',
        age: 28,
        city: 'Bangalore',
        language: 'JavaScript',
        framework: 'Angular',
        image: 'https://randomuser.me/api/portraits/men/54.jpg'
    },

    {
        name: 'Camella Cabello',
        age: 18,
        city: 'Kolkata',
        language: 'Python',
        framework: 'Django',
        image: 'https://randomuser.me/api/portraits/women/55.jpg'
    },

    {
        name: 'Aishwariya Rai',
        age: 45,
        city: 'Mumbai',
        language: 'Python',
        framework: 'Flask',
        image: 'https://randomuser.me/api/portraits/women/57.jpg'
    },

    {
        name: 'Rohit Sharma',
        age: 34,
        city: 'Jharkhand',
        language: 'Go',
        framework: 'Go Framework',
        image: 'https://randomuser.me/api/portraits/men/61.jpg'
    }
]

function cvIterator(profiles){
    let nextIndex = 0
    return{
        next: function(){
            return nextIndex<profiles.length ? {value: profiles[nextIndex++], done: false} : {done: true}
        }
    }
}

let next = document.getElementById("next")

next.addEventListener("click", nextCV)

candidates = cvIterator(data)

nextCV()

function nextCV(){
    const currentCandidate = candidates.next().value
    if(currentCandidate != undefined){
    
        let image = document.getElementById("image")
        let profile = document.getElementById("profile")
    
        image.innerHTML = `<img src="${currentCandidate.image}">`
        profile.innerHTML = `<ul class="list-group">
        <li class="list-group-item">Name              :${currentCandidate.name}</li>
        <li class="list-group-item">Age               :${currentCandidate.age}</li>
        <li class="list-group-item">Lives in          :${currentCandidate.city}</li>
        <li class="list-group-item">Primarily works on:${currentCandidate.language}</li>
        <li class="list-group-item">Uses              :${currentCandidate.framework}</li>
      </ul>`
    }
    else
    {
        document.getElementById("last").innerHTML = `<h4>No more CVs to show</h4>`
        setTimeout(() => {
            window.location.reload()
        }, 2000);
    }
}