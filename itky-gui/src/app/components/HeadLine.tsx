'use client';

import Link from 'next/link';

const HeadLine = () => {
  return (
    <>
      <div className="mb-8 flex">
        <div className='flex-col space-y-4'>
          <h1 className='font-mono text-4xl font-bold md:text-5xl'>Welcome, Developpers!</h1>
          <div className='flex justify-center'>
            <Link href={'/'} className='rounded-full bg-black px-4 py-2 text-white'>
              編集する
            </Link>
          </div>
        </div>
      </div>
    </>
  );
};

export default HeadLine;
