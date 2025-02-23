/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @param {number} x
 * @param {number} y
 * @return {boolean}
 */
const isCousins = (root, x, y) => {
  const q = new Deque([root]);

  while(q.size()) {
    let size = q.size();
    let isFirstNodeFound = false;
    let isSiblings = false;

    while(size) {
        const node = q.popFront();
        
        if (!node) {
            isSiblings = false;
        } else {
            if (node.val === x || node.val === y) {
                if (!isFirstNodeFound) {
                    isFirstNodeFound = true;
                    isSiblings = true;
                } else {
                    return !isSiblings;
                }
            }

            if (node.left) {
                q.pushBack(node.left);
            }
            if (node.right) {
                q.pushBack(node.right);
            }
            q.pushBack(null);
        }

        size--;
    }

    if (isFirstNodeFound) {
        return false;
    }
  }

  return false;
}