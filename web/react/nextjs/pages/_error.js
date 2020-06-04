import React from 'react';
import Link from 'next/link';


const errorPage = () => (
    <div>
       <h1>404 || errorPage</h1>
       <p>OOOOPSS... Something Went Wrong</p>
       <Link href='/' >Back to home</Link>
     </div>
)

export default errorPage;