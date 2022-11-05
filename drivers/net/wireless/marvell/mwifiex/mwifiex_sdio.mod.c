#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x9ba164b8, "sdio_writeb" },
	{ 0xfa5275a0, "sdio_readb" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xbaa77307, "mwifiex_cancel_hs" },
	{ 0xe1dcef76, "sdio_writesb" },
	{ 0x94e2491b, "sdio_enable_func" },
	{ 0x23327ede, "sdio_claim_irq" },
	{ 0x87e6ac, "mmc_hw_reset" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x265268a0, "mwifiex_disable_auto_ds" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x52620b20, "mwifiex_process_sleep_confirm_resp" },
	{ 0x999e8297, "vfree" },
	{ 0xffdfab39, "mwifiex_main_process" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x74b55eca, "mwifiex_prepare_fw_dump_info" },
	{ 0x866ab8f5, "sdio_get_host_pm_caps" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xada5a7d7, "_mwifiex_dbg" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xdcb764ad, "memset" },
	{ 0x4492f7ba, "mwifiex_add_card" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x818880ec, "of_match_node" },
	{ 0xa8d240cf, "mwifiex_shutdown_sw" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xd4dad9f3, "mwifiex_alloc_dma_align_buf" },
	{ 0x6e1ead94, "sdio_readsb" },
	{ 0xdb366aab, "sdio_unregister_driver" },
	{ 0x96198230, "sdio_set_host_pm_flags" },
	{ 0x66e769d0, "mwifiex_dnld_fw" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x2a991dac, "sdio_release_irq" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xdfe036d8, "sdio_f0_readb" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8959eb05, "mwifiex_reinit_sw" },
	{ 0x37aea96d, "mwifiex_handle_rx_packet" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x411de49, "mwifiex_deauthenticate_all" },
	{ 0xe276c00f, "mwifiex_remove_card" },
	{ 0x4a1ab891, "mwifiex_enable_hs" },
	{ 0x4c12cdd9, "mwifiex_upload_device_dump" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xba9c29b4, "sdio_register_driver" },
	{ 0x431b0b69, "sdio_claim_host" },
	{ 0xcc3ae0, "mwifiex_drv_info_dump" },
	{ 0xe22d1723, "skb_put" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x7a569e5f, "mwifiex_init_shutdown_fw" },
	{ 0x7bb83659, "sdio_set_block_size" },
	{ 0x161a1171, "sdio_disable_func" },
	{ 0xb4a2de5c, "sdio_release_host" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "mwifiex");

MODULE_ALIAS("sdio:c*v02DFd9116*");
MODULE_ALIAS("sdio:c*v02DFd9119*");
MODULE_ALIAS("sdio:c*v02DFd9129*");
MODULE_ALIAS("sdio:c*v02DFd912D*");
MODULE_ALIAS("sdio:c*v02DFd9135*");
MODULE_ALIAS("sdio:c*v02DFd9139*");
MODULE_ALIAS("sdio:c*v02DFd9145*");
MODULE_ALIAS("sdio:c*v02DFd9149*");
MODULE_ALIAS("sdio:c*v02DFd9141*");

MODULE_INFO(srcversion, "DEF02E58B7FE6D9047E5B88");
