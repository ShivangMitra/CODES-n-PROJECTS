let apikey = "7014c24e27b94012adec45db3d465171"

newsCard = document.getElementById("newsCard")

const xhr = new XMLHttpRequest()
xhr.open("GET", `http://newsapi.org/v2/top-headlines?country=in&apiKey=${apikey}`, true)

xhr.onload = function(){
    if(this.status === 200)
    {
        let json = JSON.parse(this.responseText)
        let articles = json.articles
        // console.log(articles)
        let newsHTML = ""
        for (news in articles)
        {
            // console.log(articles[news])
            newsHTML += `<div class="card">
            <div class="card-header" id="heading${news}">
                <h2 class="mb-0">
                    <button class="btn btn-link btn-block text-left collapsed" type="button" data-toggle="collapse"
                        data-target="#collapse${news}" aria-expanded="true" aria-controls="collapse${news}">
                        ${articles[news].title}
                    </button>
                </h2>
            </div>
            
            <div id="collapse${news}" class="collapse" aria-labelledby="heading${news}"
                data-parent="#newsCard">
                <div class="card-body">
                ${articles[news].content}.<a href="${articles[news].url}" target="_blank"> Read more here</a>
                </div>
            </div>
            </div>`
        }
        newsCard.innerHTML = newsHTML
    }
    else{
        console.log("some error occured")
    }
}

xhr.send()
