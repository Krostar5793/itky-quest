'use client';

import { useEffect, useState } from 'react';

const DotWorks = () => {
  const [imageList, setImageList] = useState([]);
  const [message, setMessage] = useState<string | null>(null);
  
  useEffect(() => {
    async () => {
      try {
        const res = await fetch(
          'https://api.github.com/repos/Krostar5793/itky-quest/contents/dot-works',
          {
            method: 'GET',
            headers: { 'Authorization': `token ${process.env.NEXT_PUBLIC_GITHUB_TOKEN}` }
          }
        );
        if (!res.ok) {
          throw new Error('Failed to fetch data.');
        }
        const data = await res.json();
        const parsedData = JSON.parse(JSON.stringify(data));
        setImageList(parsedData);
      } catch ( error ) {
        setMessage('Error: ' + error);
        alert(error);
      }
    };
  }, []);

  return (
    <div>
      <ul className="flex flex-wrap justify-center gap-2">
        {imageList.map((image, index) => (
          <li key={index}>
            <img
              src={image.download_url}
              alt={image.name}
              className="size-48"
            />
          </li>
        ))}
      </ul>
    </div>
  );
};

export default DotWorks;
