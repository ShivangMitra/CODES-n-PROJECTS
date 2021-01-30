import React from 'react'

function MemoComp({name}) {
    console.log("rendering memo component")
    return (
        <div>
            {name}
        </div>
    )
}

// export default MemoComp
export default React.memo(MemoComp)