let fileUpload = document.getElementById('file-upload');
            let selectedFiles = document.querySelector('#selected-files code');
            let submitButton = document.querySelector('input[type=submit]');
                
            let filenames = ''
            fileUpload.onchange = function (){
                filenames = ''
                for(let file of this.files){
                    filenames += file.name
                    filenames += ','
                }
                selectedFiles.parentElement.style.display = 'block'
                selectedFiles.textContent = filenames
                submitButton.style.display = 'inline-block';
            }