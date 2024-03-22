'use client';

import Link from 'next/link';

const Footer = () => {
  return (
    <footer className='flex h-20 w-full items-center'>
      <div className='flex w-full justify-between px-[8vw]'>
        <span>{ new Date().getFullYear() } &copy; All Rights Reserved</span>
        <div>
          Build with <Link href={'https://github.com/nashdev255/'} target='blank'>nashdev255</Link>
        </div>
      </div>
    </footer>
  );
};

export default Footer;
